
#include "conf.h"

#include "type.h"
#include "adc.h"
#include "dac.h"
#include "eusart.h"
#include "motor.h"
#include "timer.h"
#include "io.h"

// 32MHzClk
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

//	for(;;){
//		MoveMotor( 300 );
//	}
	
	for(;;){

		// 10mSecInterval
		if( gInterval > 2 ){
			gInterval -= 2;
			
			TaskAdc();
			TaskInput( &In );
			SetPwmCh1( (ExistPulse()) ?25 :500 );		// �O��������� SN�Ƀp���X�o��
			SetPwmCh2(25);							// ���g������ SC�Ƀp���X�o��

			// ����J�n�܂łɁA������������肷��B
			// �h�A����́A�h�A�����o��->�h�A���쌟�m�J�n->�h�A�˓��茟�m��A��ԉ����܂Œ�~�ێ�
			if( CheckMoveSig( &In ) ){
				INTCONbits.INTE = true;

				if( IsMoveMotorPos() ){
					if( DoorStopDetectDly < DETECT_DLY ) DoorStopDetectDly ++;
				}else DoorStopDetectDly = 0;

				if( DoorStopDetectDly == DETECT_DLY ){
					MoveMotor( 0 );
				}else{
					MoveMotor( spd );
				}
			}else{
				MoveMotor( 0 );
				DoorStopDetectDly = 0;
				SetDoorDec( In.dpsw1 );
				spd = ReadAdc(AD_VR1) >>6;
				DoorStopDetectDly = 0;
				INTCONbits.INTE = false;
				INTCONbits.INTF = false;
			}
			
		}
	}
}