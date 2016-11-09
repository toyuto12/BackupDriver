#define DAC_C
#include "dac.h"

/**
 * DAC�֘A�̃|�[�g������
 */
void InitDacPort( void ){
	TRISAbits.TRISA2 = 1;
}

/**
 * DAC�֘A�̃��W�X�^������
 */
void SettingDac( void ){
	
	DACCON0bits.DACEN = true;
	DACCON0bits.DACOE1 = true;		// DACOUT1 Enable
	DACCON0bits.DACOE2 = false;		// DACOUT2 Disable
	DACCON0bits.DACPSS = 0b00;		// Vref+: VDD
	DACCON0bits.DACNSS = 0;			// Vref-: VSS
}

/**
 * DAC�֘A�̏�����
 */
void InitDac( void ){
	InitDacPort();
	SettingDac();
}