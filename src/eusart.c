#define EUSART_C
#include <stdarg.h>
#include "eusart.h"

#define IS_TXEMPTY		TXSTAbits.TRMT

/**
 * EUSART�ɕ�������o�͂���
 * @param dat ������ւ̃|�C���^
 */
void SendEusartStr( uint8_t *dat ){
	while( *dat ){
		while( !IS_TXEMPTY );
		TXREG = *dat;
		dat++;
	}
}

/**
 * EUSART�ɕ������o�͂���
 * @param dat �ꕶ��
 */
void SendEusart( uint8_t dat ){
	while( !IS_TXEMPTY );
	TXREG = dat;
}


// BaudRate 57600
/**
 * EUSART�֘A�̏�����
 * BaudRate 57600�Œ�
 * Tx�̂݁B���荞�݂Ȃ�
 */
void InitEusart( void ){
	
	APFCONbits.RXSEL = 1;		// RX -> RB7
	APFCONbits.TXSEL = 1;		// TX -> RB6
	RCSTAbits.SPEN	= true;		// SerialPortEnable
	RCSTAbits.RX9	= false;	// 8BitReception
	
	TXSTAbits.CSRC	= 1;		// MasterMode
	TXSTAbits.TX9	= false;	// 8BitTransmit
	TXSTAbits.SYNC	= 0;		// Asynchronous
	TXSTAbits.BRGH	= 1;		// HighSpeedMode
	
	BAUDCONbits.SCKP	= false;	// Data NonInvert
	BAUDCONbits.BRG16	= true;		// 16BitBaudRate
	
	SPBRG = 138;
	
//	RCSTAbits.CREN = true;		// ReserveEnable
	TXSTAbits.TXEN = true;		// TransmitEnable
}

/**
 * Printu�����̐��l�f�[�^��ASCII�ɕϊ��B���`����B
 * @param val �Ώۂ̐��l�f�[�^
 * @param digit �Ώۂ̕\�������i0���߁j
 * @param regex �Ώۂ̊
 * @param isNeg �Ώۂ�Signed���H
 * @return �ϊ���̃f�[�^�ւ̃|�C���^
 */
uint8_t *DigitArrange( uint16_t val, uint8_t digit, uint8_t regex, uint8_t isNeg ){
	static uint8_t buf[8];
	uint8_t pos = 6,tmp;

	if( digit > 5 ) digit = 5;		// ������
	buf[7] = 0;		// �����f�[�^
	if( !val ){ buf[pos--] = '0';	buf[pos--] = ' ';	}
	else{
		if( isNeg && (regex==10) && (val&0x8000) ) val = ((~val) +1);		// 2�̕␔
		else isNeg = false;
		
		while( val ){
			tmp = val %regex;
			buf[pos--] = (tmp>=10) ?tmp+('A'-10) :tmp+'0' ;
			val /= regex;
			if( digit ) digit--;
		}
		while( digit-- ) buf[pos--] = ' ';
		if( isNeg ) buf[pos--] = '-';
		else buf[pos--] = ' ';
	}	
	
	return &buf[pos+1];
}

//************************************************************/
// Debug�pPrint
//	@param str_num	: �����񒆂�%x�̐�
//	@param *str		: �\������printf�t�H�[�}�b�g������i�������j
//	@param ...		: primtf�t�H�[�}�b�g�ɕ\��������f�[�^�̉ϒ��z��
//************************************************************
void printu( const char *str, ...){
	bool isSign;
	uint8_t radix,digit;
	
	//�ϒ������Ƃ肾��
	va_list va;
	va_start(va,str);

	while(*str){
		if(*str == '%'){
			isSign = false;
			switch(*(++str)){
			case 'x':case 'X':	radix=16;break;
			case 'D':			isSign=true;
			case 'd':			radix=10;break;
			default:str++;return;
			}
			if( (*(str+1) >='0') && ((*(str+1)) <='9') ){
				digit = *(str+1) - '0';
				str ++;
			}else digit = 0;
			SendEusartStr( DigitArrange( va_arg(va,uint16_t), digit, radix, isSign ) );
		}else{
			SendEusart( *str );
		}
		str++;
	}
	va_end(va);
}

