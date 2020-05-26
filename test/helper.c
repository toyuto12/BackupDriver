#include "helper.h"
#include "adc.h"

extern uint16_t AdBuf[ADCH][ADBUF];

void FillAdc( uint8_t ch, uint16_t val ){
	uint8_t i;

	for(i=0;i<ADBUF;i++) AdBuf[ch][i] = val;
	return;
}

void test_fillAdc( void ){
	uint8_t i;

	FillAdc( 0, 123 );

	for(i=0;i<ADBUF;i++){
		if( AdBuf[0][i] != 123 ) cut_fail("ERR%D",i);
	}
}