#ifndef DAC_H
#define DAC_H

#include "type.h"

#define OUTPUT_DA(x)	(DACCON1=x)

void InitDac( void );
void InitDacPort( void );


#endif	// DAC_H