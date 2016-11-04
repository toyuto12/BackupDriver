#define MOTOR_C
#include "motor.h"
#include "dac.h"
#include "timer.h"
#include "eusart.h"

uint8_t IsMoveMotorPos( void ){
	static int16_t ExPos = 0x7fff;	// Å‘å’l
	static uint16_t Dly;
	uint8_t r = false;
	
	if( (gMotorPos > (ExPos+STOP_RANGE)) ||
			(gMotorPos < (ExPos-STOP_RANGE)) ){
		Dly = STOP_DETECT_TIME;
		ExPos = gMotorPos;
	}else{
		if( Dly ) Dly --;
		else r = true;
	}
	return r;
}

uint8_t sMotorDec = 0;

void SetDoorDec( uint8_t dec ){
	sMotorDec = (dec) ?1 :0;
}

void MoveMotor( int16_t val ){
	static int16_t ExVal=0;
//	oMOT_60_120 = true;
//	oMOT_60_120 = false;
//	oMOT_BRAKE = true;			// True‚Å‰ðœ

	if( val > 0 ){
		oMOT_DEC = sMotorDec;
		oMOT_EN = false;
		if( val > 255 ) val = 255;

		if ( ExVal < val ) ExVal +=3;
		if ( ExVal > val ) ExVal = val;
		OUTPUT_DA(ExVal);
	}else if( val < 0 ){
		oMOT_DEC = !sMotorDec;
		oMOT_EN = false;
		if( val < -255 ) val = -255;

		if( ExVal > val ) ExVal += 3;
		if( ExVal < val ) ExVal = val;
		OUTPUT_DA(-ExVal);
	}else{
		oMOT_EN = true;
		OUTPUT_DA( val );
		ExVal = val;
	}

}
