#define EUSART_C
#include <stdarg.h>
#include "eusart.h"

#define IS_TXEMPTY		TXSTAbits.TRMT

/**
 * EUSARTに文字列を出力する
 * @param dat 文字列へのポインタ
 */
void SendEusartStr( uint8_t *dat ){
	while( *dat ){
		while( !IS_TXEMPTY );
		TXREG = *dat;
		dat++;
	}
}

/**
 * EUSARTに文字を出力する
 * @param dat 一文字
 */
void SendEusart( uint8_t dat ){
	while( !IS_TXEMPTY );
	TXREG = dat;
}


// BaudRate 57600
/**
 * EUSART関連の初期化
 * BaudRate 57600固定
 * Txのみ。割り込みなし
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
 * Printu向けの数値データをASCIIに変換。整形する。
 * @param val 対象の数値データ
 * @param digit 対象の表示桁数（0埋め）
 * @param regex 対象の基数
 * @param isNeg 対象はSignedか？
 * @return 変換後のデータへのポインタ
 */
uint8_t *DigitArrange( uint16_t val, uint8_t digit, uint8_t regex, uint8_t isNeg ){
	static uint8_t buf[8];
	uint8_t pos = 6,tmp;

	if( digit > 5 ) digit = 5;		// 桁制限
	buf[7] = 0;		// 末尾データ
	if( !val ){ buf[pos--] = '0';	buf[pos--] = ' ';	}
	else{
		if( isNeg && (regex==10) && (val&0x8000) ) val = ((~val) +1);		// 2の補数
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
// Debug用Print
//	@param str_num	: 文字列中の%xの数
//	@param *str		: 表示するprintfフォーマット文字列（仮準拠）
//	@param ...		: primtfフォーマットに表示させるデータの可変長配列
//************************************************************
void printu( const char *str, ...){
	bool isSign;
	uint8_t radix,digit;
	
	//可変長引数とりだし
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

