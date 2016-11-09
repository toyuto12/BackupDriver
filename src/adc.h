#ifndef ADC_H
#define ADC_H

#include "type.h"

#define ADBUF		8
#define ADCH		4
typedef enum { AD_TEMP=0, AD_VR1, AD_MOTCURR, AD_DC } eADCH;
//typedef enum { AD_VR1, AD_MOTCURR } eADCH;

uint8_t TaskAdc( void );
uint16_t ReadAdc( eADCH ch );
void InitAdcPort( void );
void InitAdc( void );
#ifdef ADC_C

#else

#endif	// ADC_C
#endif	// ADC_H