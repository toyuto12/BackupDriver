#include "helper.h"
#include "adc.h"


void test_ReadAdc(void){
	uint8_t i;

	FALSE( TaskAdc() );

	for(i=0;i<8;i++){
		ADRES = 200;		ADCON0bits.ADGO = false;	TaskAdc();
		ADRES = 300;		ADCON0bits.ADGO = false;	TaskAdc();
		ADRES = 400;		ADCON0bits.ADGO = false;	TaskAdc();
		ADRES = 100;		ADCON0bits.ADGO = false;	TaskAdc();
	}

	TRUE( TaskAdc() );
	EQ( 100, ReadAdc(0) );
	EQ( 200, ReadAdc(1) );
	EQ( 300, ReadAdc(2) );
	EQ( 400, ReadAdc(3) );
}