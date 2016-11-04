#ifndef IO_H
#define IO_H

#include "type.h"

// 1Cnt = 10mSec
#define STATE_CHANGE_DLY	50			// �����[���삩��A���[�^�쓮�J�n�܂ł̃f�B���C
#define DETECT_DLY			100			// ���[�^���쎞�̌˓��茟�m���莞��

typedef struct{
	uint8_t dpsw1	:1;
	uint8_t dpsw2	:1;
	uint8_t es		:1;
	uint8_t ss		:1;
	uint8_t motErr	:1;
	uint8_t r2_14d	:1;
	uint8_t nc		:2;
} stInput;

#define iMOT_ERROR	PORTAbits.RA4
#define iSIG_ES		PORTAbits.RA7
#define iSIG_SS		PORTAbits.RA6
#define iSIG_DIP1	PORTBbits.RB4
#define iSIG_DIP2	PORTBbits.RB5
#define iSIG_R2_14D	PORTAbits.RA3

#define oMOT_BRAKE	LATCbits.LATC4
#define oMOT_EN		LATCbits.LATC7
#define oMOT_DEC	LATCbits.LATC3
#define oMOT_60_120	LATCbits.LATC5
#define oLED_DCON	LATCbits.LATC6

uint8_t CheckMoveSig( stInput *in );
void TaskInput( stInput *in );
void InitIoPort( void );

#endif	// IO_H