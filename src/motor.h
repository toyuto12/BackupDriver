#ifndef MOTOR_H
#define MOTOR_H

#include "type.h"
#include "io.h"

#define STOP_RANGE			3			// ���[�^�̌˓��茟�m�F���͈�(1Cnt = 1/2Cyc)
#define STOP_DETECT_TIME	100			// ���[�^�̌˓��茟�m�F������(1Cnt = 10mSec))

uint8_t IsMoveMotorPos( void );
void SetDoorDec( uint8_t dec );
void MoveMotor( int16_t val );

#ifdef MOTOR_C

#else

#endif	// MOTOR_C
#endif	// MOTOR_H