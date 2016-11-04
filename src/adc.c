#define ADC_C
#include "adc.h"

// useADCPort A0,1,5,B3
// Pair ANNo AN0,1,4,9

#define SEL_ADCH(x)		(ADCON0bits.CHS = x)

uint16_t AdBuf[ADCH][ADBUF];

uint8_t TaskAdc( void ){
	static uint8_t SelAd[] = {0,1,4,9};
	static uint8_t Ch=0,Ring=0,IsFill=false;
	
	if( !ADCON0bits.ADGO ){
		AdBuf[Ch][Ring] = ADRES & 0x0FFF;
		
		if( Ch == (ADCH-1) ){
			Ch = 0;
			if( Ring == (ADBUF-1) ){
				Ring = 0;
				IsFill = true;
			}else Ring ++;
		}else Ch ++;
		
		SEL_ADCH(SelAd[Ch]);	
		ADCON0bits.ADGO = true;
	}
	return IsFill;
}

uint16_t ReadAdc( eADCH ch ){
	uint16_t tmp=0;
	uint8_t i;

	for(i=0;i<ADBUF;i++) tmp += AdBuf[ch][i];
	return tmp >>3;		// 1/8
}

void InitAdcPort( void ){
	uint8_t sela = 0x23;		// A0,1,5
	uint8_t selb = 0x08;		// B3
	
	TRISA |= sela;	ANSELA = sela;
	TRISB |= selb;	ANSELB = selb;
}

void SettingAdc( void ){
	
	ADCON0bits.ADRMD = 0;		// 12bitMode

	ADCON1bits.ADNREF = 0;		// Vref-: VSS
	ADCON1bits.ADPREF = 0;		// Vref+: VDD
	ADCON1bits.ADFM = 1;		// 2's Complement format
	ADCON1bits.ADCS = 0b111;	// UseClock Frc
	
	ADCON2bits.TRIGSEL = 0;		// AutoTrigger Disable
	ADCON2bits.CHSN = 0b1111;	// NegativeDifferentialInput: ADNREF

	ADCON0bits.ADON = true;		// ADC Enable
}

void InitAdc( void ){
	InitAdcPort();
	SettingAdc();
}
