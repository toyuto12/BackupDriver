#ifndef TIMER_H
#define TIMER_H

#include "type.h"

// 1Cnt = 10mSec
#define T1_SURVIVAL_TIME	100		// 外部生存信号未受信を認める時間

void InitTimer0( void );

void InitTimer1ForPlscnt( void );
uint8_t ExistPulse( void );

void InitTimer2ForPwm( void );	
void SetPwmCh1( uint16_t val );
void SetPwmCh2( uint16_t val );		

#ifdef TIMER_C
	uint8_t gInterval = 0;
	int16_t gMotorPos = 0;
#else
	extern uint8_t gInterval;
	extern int16_t gMotorPos;
#endif	// TIMER_C
#endif	// TIMER_H
