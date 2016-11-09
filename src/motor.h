#ifndef MOTOR_H
#define MOTOR_H

#include "type.h"
#include "io.h"

#define STOP_RANGE			3			// ���[�^�̌˓��茟�m�F���͈�(1Cnt = 1/2Cyc)
#define STOP_DETECT_TIME	10			// ���[�^�̌˓��茟�m�F������(1Cnt = 10mSec))

#define MOTOR_CURRENT_LIMIT	2700		// �\�t�g�E�F�A�d������
										// �d�������l(ADC) = ((�����ݒ�l*���m��R�l) *�񔽓]��H������ ) / (VCC/12BitADC)
										// 2560 = (( 2.5A *0.05�� ) *25 ) / (5V/4096)

uint8_t IsMoveMotorPos( void );
void SetDoorDec( uint8_t dec );
void MoveMotor( int16_t val );

#ifdef MOTOR_C

#else

#endif	// MOTOR_C
#endif	// MOTOR_H