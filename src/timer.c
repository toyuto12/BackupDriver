#define TIMER_C
#include "timer.h"
#include "eusart.h"

#define TIMER0_10MS		156

#ifndef TDD
void interrupt ISR(void){
#else
void ISR( void ){
#endif
	static uint8_t Edge;

	// �C���^�[�o���^�C�}�[�̊��荞��
	if( INTCONbits.TMR0IF ){
		gInterval ++;
		TMR0 -= TIMER0_10MS;
		INTCONbits.TMR0IF = false;
	}
	
	if( INTCONbits.INTF ){
		Edge = OPTION_REGbits.INTEDG;
		
		if( Edge )	gMotorPos += ( PORTBbits.RB1 ) ?1 :-1;
		else		gMotorPos -= ( PORTBbits.RB1 ) ?1 :-1;
		
		OPTION_REGbits.INTEDG = !Edge;
		INTCONbits.INTF = false;
	}
}

/**
 * �^�C�}�[�O���C���^�[�o���^�C�}�[�Ƃ��ď���������B
 * 10mSec���Ɋ��荞�ݔ����ݒ�
 */
void InitTimer0( void ){
	INTCONbits.TMR0IE = true;	// T0OV Interrupt Enable
	OPTION_REGbits.PSA 		= 0;		// Timer0Prescaler Enable
	OPTION_REGbits.PS 		= 0b111;	// Timer0Prescaler 1/256
	OPTION_REGbits.TMR0CS 	= 0;		// ClkSrc Fosc/4
}

/**
 * Timer1���O���p���X�J�E���^�[�Ƃ��Đݒ肷��B
 */
void InitTimer1ForPlscnt( void ){
	T1CONbits.T1OSCEN = false;
	T1CONbits.TMR1CS = 0b10;		// InputClk: T1CKI
	T1CONbits.T1CKPS = 0b00;		// Prescaler: 1/1

	T1CONbits.nT1SYNC = 0;			// ClkSynchronize

	T1CONbits.TMR1ON = true;		// Timer1Start
}

/**
 * �O���p���X�����͂���Ă���ꍇ�ATrue��ԋp
 * @return �O���p���X�M���@�L��
 */
uint8_t ExistPulse( void ){
	static uint16_t Time = T1_SURVIVAL_TIME;

	if( TMR1 ){
		TMR1 = 0;
		Time = T1_SURVIVAL_TIME;
	}else if( Time ) Time --;

	return (Time) ?1 :0;
}

/**
 * CCP1�ւ�PWM�o�͐ݒ�B
 * 0�ŏ��LOW�BRP2�ȏ�ŏ��HIGH
 * @param val : PWM_HIGH���ԁiPR2���ő�l�Ƃ���j
 */
void SetPwmCh1( uint16_t val ){
	if( !val ){
		CCP1CONbits.CCP1M 	= 0b0000;		// PWM Disable
		LATCbits.LATC2 		= 0;				// DC Low
		TRISCbits.TRISC2 	= 0;		
	}else if( val >= PR2 ){
		CCP1CONbits.CCP1M 	= 0b0000;		// PWM Disable
		LATCbits.LATC2 		= 1;				// DC High
		TRISCbits.TRISC2 	= 0;
	}else{
		TRISCbits.TRISC2 	= 0;
		CCPR1L 				= val;
		CCP1CONbits.DC1B 	= 0;
		CCP1CONbits.CCP1M 	= 0b1100;		// PWM Enable
	}
}

/**
 * CCP2�ւ�PWM�o�͐ݒ�B
 * 0�ŏ��LOW�BRP2�ȏ�ŏ��HIGH
 * @param val : PWM_HIGH���ԁiPR2���ő�l�Ƃ���j
 */
void SetPwmCh2( uint16_t val ){

	if( !val ){
		CCP2CONbits.CCP2M 	= 0b0000;		// PWM Disable
		LATCbits.LATC1 		= 0;				// DC Low
		TRISCbits.TRISC1 	= 0;
	}else if( val >= PR2 ){
		CCP2CONbits.CCP2M 	= 0b0000;		// PWM Disable
		LATCbits.LATC1 		= 1;				// DC High
		TRISCbits.TRISC1 	= 0;
	}else{
		TRISCbits.TRISC1 	= 0;
		CCPR2L 				= val;
		CCP2CONbits.DC2B 	= 0;
		CCP2CONbits.CCP2M 	= 0b1100;		// PWM Enable
	}
}

/**
 * PWM�o�͊֘A�̏�����(CCP1 CCP2)
 */
void InitTimer2ForPwm( void ){

	APFCONbits.CCP1SEL	= 0;		// CCP1 -> RC2
	APFCONbits.CCP2SEL	= 0;		// CCP2 -> RC1	
	TRISCbits.TRISC1 	= 0;		// CCP2
	TRISCbits.TRISC2 	= 0;		// CCP1

	T2CONbits.T2CKPS 	= 0b10;		// Prescaler 1/16 -> 500kHz/Cnt
//	T2CONbits.T2CKPS 	= 0b11;		// Prescaler 1/64
	T2CONbits.T2OUTPS 	= 0b1111;	// Postscaler 1/16
	PR2 = 100;

	T2CONbits.TMR2ON 	= true;		// Timer2 Start
}