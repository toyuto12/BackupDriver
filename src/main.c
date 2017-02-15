
#include "conf.h"

#include "type.h"
#include "adc.h"
#include "dac.h"
#include "eusart.h"
#include "motor.h"
#include "timer.h"
#include "io.h"

/**
 * ����N���b�N�̏��������s��
 * 16MHz�N���b�N
 */
void InitClk(void){
	OSCCONbits.SCS = 0b00;			// Depend on FOSC	
	OSCCONbits.IRCF = 0b1110;		// Select 16MHzBase
	OSCCONbits.SPLLEN = 1;			// 4xPLL Enable
	
	while( !OSCSTATbits.PLLR );
}

void main(void) {
	static stInput In = {0};
	static uint8_t FlgDly = 0;
	static uint16_t DoorStopDetectDly = 0;
	static uint16_t spd=0;
	static uint8_t StopIntL=false;	
	
	InitClk();
	
	oMOT_60_120 = true;
	oMOT_BRAKE = true;
	oMOT_EN = true;
	InitIoPort();
	InitTimer0();
	InitAdc();
	InitDac();
	InitTimer2ForPwm();
	InitTimer1ForPlscnt();
	InitEusart();
		
//	printu("Start\r\n");
	
	INTCONbits.GIE = true;		// Interrupt start
	oLED_DCON = 0;
/*
	for(;;){
		TaskAdc();
		if( ReadAdc(AD_MOTCURR) > MOTOR_CURRENT_LIMIT ) oMOT_BRAKE = false;
		else oMOT_BRAKE = true;
		
		if( gInterval > 2 ){
			gInterval -= 2;
			
			MoveMotor( ReadAdc(AD_VR1) >>5 );

		}
	}
*/	
	for(;;){

		TaskAdc();
		if( ReadAdc(AD_MOTCURR) > MOTOR_CURRENT_LIMIT ){
			oMOT_BRAKE = false;
			if( In.dpsw2 ) MoveMotor( 0 );				// �������[�^�̎��͈�x���x���O�ɗ��Ƃ�
		}else oMOT_BRAKE = true;

		// 10mSecInterval
		if( gInterval > 2 ){
			gInterval -= 2;
			
			TaskInput( &In );
			SetPwmCh1( (ExistPulse()) ?50 :500 );		// �O��������� SN�Ƀp���X�o��
			SetPwmCh2(50);								// ���g������ SC�Ƀp���X�o��

			// ����J�n�܂łɁA������������肷��B
			// �h�A����́A�h�A�����o��->�h�A���쌟�m�J�n->�h�A�˓��茟�m��A��ԉ����܂Œ�~�ێ�
			if( CheckMoveSig( &In ) ){
				INTCONbits.INTE = true;

				if( IsMoveMotorPos( StopIntL ) ){
					if( DoorStopDetectDly < DETECT_DLY ) DoorStopDetectDly ++;
				}else DoorStopDetectDly = 0;

				if( StopIntL || (DoorStopDetectDly == DETECT_DLY) ){
					StopIntL = true;
					MoveMotor( 0 );
				}else{
					MoveMotor( spd );
				}
			}else{
				MoveMotor( 0 );
				DoorStopDetectDly = 0;
				SetDoorDec( In.dpsw1 );
				
				spd = ReadMotorSpeed( In.dpsw2, ReadAdc(AD_VR1) );
				// spd = ReadAdc(AD_VR1) >>5;
                // spd =spd+50;
				
				DoorStopDetectDly = 0;
				INTCONbits.INTE = false;
				INTCONbits.INTF = false;
				StopIntL = false;
			}
			
		}
	}
}
