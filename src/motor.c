#define MOTOR_C
#include "motor.h"
#include "dac.h"
#include "adc.h"
#include "timer.h"
#include "eusart.h"

/**
 * 速度VRとDIPSWの状態から、モータ指令値を算出する
 * @param sw	: DIPSWの状態
 * @param val	: 速度VRのAD値
 * @return	: 速度指令値
 */
int16_t ReadMotorSpeed( uint8_t sw, int16_t val ){
	double gain;
	
	if( sw ){
		gain = (double)( MOTSPD_DIPSWON_MAX - MOTSPD_DIPSWON_MIN ) /4096;
		val = (int16_t)((val *gain) +MOTSPD_DIPSWON_MIN);
	}else{
		gain = (double)( MOTSPD_DIPSWOFF_MAX - MOTSPD_DIPSWOFF_MIN ) /4096;
		val = (int16_t)((val *gain) +MOTSPD_DIPSWOFF_MIN);
	}
	return val;
}

/**
 * モータ位置情報から戸当り状態を検知する。
 * @return 戸当り検知時True
 */
uint8_t IsMoveMotorPos( uint8_t reset ){
	static int16_t ExPos = 0x7fff;	// 最大値
	static uint16_t Dly;
	uint8_t r = false;
	
	if( reset ) ExPos = 0x7fff;
	
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
/**
 * モータの動作方向を設定する。
 * @param dec : モータ動作方向
 */
void SetDoorDec( uint8_t dec ){
	sMotorDec = (dec) ?1 :0;
}

/**
 * モータの動作設定を指定する。
 * 0でモータDisableにする。
 * 正負の増加時はスローアップする。
 * @param val : -255~255の範囲で指定。
 */
void MoveMotor( int16_t val ){
	static int16_t ExVal=0;
//	oMOT_60_120 = true;
//	oMOT_60_120 = false;
//	oMOT_BRAKE = true;			// Trueで解除

	oMOT_BRAKE = true;
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
