#include <cutter.h>
#include "motor.h"
#include "dac.h"
#include "helper.h"
#include "timer.h"

void test_IsMoveMotorPos(void){
	uint8_t c;

	gMotorPos = 0;
	for(c=0;!IsMoveMotorPos( false );c++);
	EQ( STOP_DETECT_TIME+1, c );

	gMotorPos = 3;
	TRUE( IsMoveMotorPos( false ) );
	gMotorPos = 4;
	FALSE( IsMoveMotorPos( false ) );
	for(c=0;!IsMoveMotorPos( false );c++);
	EQ( STOP_DETECT_TIME, c );

	gMotorPos = 1;
	TRUE( IsMoveMotorPos( false ) );
	gMotorPos = 0;
	FALSE( IsMoveMotorPos( false ) );
}

void test_Motor(void){
	uint8_t i;

	ForceCntMotorDisable( false );

	MoveMotor( 0 );
	FALSE( !oMOT_EN );
	FALSE( DACCON1 );

	SetDoorDec( 1 );	MoveMotor( 1 );
	TRUE( !oMOT_EN );
	EQ( 1, oMOT_DEC );
	EQ( 1, DACCON1 );

	MoveMotor( -1 );
	TRUE( !oMOT_EN );
	EQ( 0, oMOT_DEC );
	EQ( 1, DACCON1 );

	SetDoorDec( 0 );	MoveMotor( 1 );
	TRUE( !oMOT_EN );
	EQ( 0, oMOT_DEC );
	EQ( 1, DACCON1 );

	MoveMotor( -1 );
	TRUE( !oMOT_EN );
	EQ( 1, oMOT_DEC );
	EQ( 1, DACCON1 );

	MoveMotor( 255 );
	cut_assert_true( DACCON1 < 255 );
	for(i=0;i<255;i++) MoveMotor( 255 );
	EQ( 255, DACCON1 );

	MoveMotor( -300 );
	cut_assert_true( DACCON1 < 255 );
	for(i=0;i<255;i++) MoveMotor( -300 );
	EQ( 255, DACCON1 );
}

void test_ForceCntMotorEnable(void){

	ForceCntMotorDisable( false );
	MoveMotor( 1 );
	TRUE( !oMOT_EN );

	ForceCntMotorDisable( true );
	MoveMotor( 1 );
	FALSE( !oMOT_EN );
}

void test_isMotorStartup(void){
	uint8_t i;

	MoveMotor(0);
	TRUE( isMotorStartup() );
	for( i=0 ; i<MOTOR_STARTUP_TIME-1 ; i++ ) MoveMotor(1);
	TRUE( isMotorStartup() );
	MoveMotor(1);
	FALSE( isMotorStartup() );

	MoveMotor(0);
	TRUE( isMotorStartup() );
	for( i=0 ; i<MOTOR_STARTUP_TIME-1; i++ ) MoveMotor(-1);
	TRUE( isMotorStartup() );
	MoveMotor(-1);
	FALSE( isMotorStartup() );

}
