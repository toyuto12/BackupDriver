#include <cutter.h>
#include "motor.h"
#include "dac.h"
#include "helper.h"
#include "timer.h"

void test_IsMoveMotorPos(void){
	uint8_t c;

	gMotorPos = 0;
	for(c=0;!IsMoveMotorPos();c++);
	EQ( 101, c );

	gMotorPos = 3;
	TRUE( IsMoveMotorPos() );
	gMotorPos = 4;
	FALSE( IsMoveMotorPos() );
	for(c=0;!IsMoveMotorPos();c++);
	EQ( 100, c );

	gMotorPos = 1;
	TRUE( IsMoveMotorPos() );
	gMotorPos = 0;
	FALSE( IsMoveMotorPos() );
}

void test_Motor(void){

	MoveMotor( 0 );
	FALSE( oMOT_EN );
	FALSE( DACCON1 );

	SetDoorDec( 1 );	MoveMotor( 1 );
	TRUE( oMOT_EN );
	EQ( 1, oMOT_DEC );
	EQ( 1, DACCON1 );

	MoveMotor( -1 );
	TRUE( oMOT_EN );
	EQ( 0, oMOT_DEC );
	EQ( 1, DACCON1 );

	SetDoorDec( 0 );	MoveMotor( 1 );
	TRUE( oMOT_EN );
	EQ( 0, oMOT_DEC );
	EQ( 1, DACCON1 );

	MoveMotor( -1 );
	TRUE( oMOT_EN );
	EQ( 1, oMOT_DEC );
	EQ( 1, DACCON1 );

	MoveMotor( 255 );
	EQ( 255, DACCON1 );

	MoveMotor( -300 );
	EQ( 255, DACCON1 );
}