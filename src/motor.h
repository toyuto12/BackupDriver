#ifndef MOTOR_H
#define MOTOR_H

#include "type.h"
#include "io.h"

#define STOP_RANGE				3			// ���[�^�̌˓��茟�m�F���͈�(1Cnt = 1/2Cyc)
#define STOP_DETECT_TIME		50			// ���[�^�̌˓��茟�m�F������(1Cnt = 10mSec))
#define MOTOR_STARTUP_TIME		30			// ���[�^����J�n���̓d�������֎~����(1Cnt = 10mSec))

#define MOTOR_CURRENT_LIMIT		2700		// �\�t�g�E�F�A�d������
											// �d�������l(ADC) = ((�����ݒ�l*���m��R�l) *�񔽓]��H������ ) / (VCC/12BitADC)
											// 2560 = (( 2.5A *0.05�� ) *25 ) / (5V/4096)

#define MOTSPD_DIPSWOFF_MIN		50		// DIPSW��OFF�̎��̑��xVR�͈̔́@�ŏ��l�i0-255)
#define MOTSPD_DIPSWOFF_MAX		178		// DIPSW��OFF�̎��̑��xVR�͈̔́@�ő�l�i0-255)
#define MOTSPD_DIPSWON_MIN		15		// DIPSW��ON�̎��̑��xVR�͈̔́@�ŏ��l�i0-255)
#define MOTSPD_DIPSWON_MAX		178		// DIPSW��ON�̎��̑��xVR�͈̔́@�ő�l�i0-255)

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