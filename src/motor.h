#ifndef MOTOR_H
#define MOTOR_H

#include "type.h"
#include "io.h"

#define STOP_RANGE				3			// モータの戸当り検知認識範囲(1Cnt = 1/2Cyc)
#define STOP_DETECT_TIME		50			// モータの戸当り検知認識時間(1Cnt = 10mSec))
#define MOTOR_STARTUP_TIME		30			// モータ動作開始時の電流制限禁止時間(1Cnt = 10mSec))

#define MOTOR_CURRENT_LIMIT		2700		// ソフトウェア電流制限
											// 電流制限値(ADC) = ((制限設定値*検知抵抗値) *非反転回路増幅率 ) / (VCC/12BitADC)
											// 2560 = (( 2.5A *0.05Ω ) *25 ) / (5V/4096)

#define MOTSPD_DIPSWOFF_MIN		50		// DIPSWがOFFの時の速度VRの範囲　最小値（0-255)
#define MOTSPD_DIPSWOFF_MAX		178		// DIPSWがOFFの時の速度VRの範囲　最大値（0-255)
#define MOTSPD_DIPSWON_MIN		15		// DIPSWがONの時の速度VRの範囲　最小値（0-255)
#define MOTSPD_DIPSWON_MAX		178		// DIPSWがONの時の速度VRの範囲　最大値（0-255)

uint8_t isMotorStartup( void );
void ForceCntMotorDisable( uint8_t en );
int16_t	ReadMotorSpeed( uint8_t sw, int16_t val );
uint8_t	IsMoveMotorPos( uint8_t reset );
void	SetDoorDec( uint8_t dec );
void	MoveMotor( int16_t val );

#ifdef MOTOR_C

#else

#endif	// MOTOR_C
#endif	// MOTOR_H