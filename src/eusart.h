#ifndef EUSART_H
#define EUSART_H

#include "type.h"

void InitEusart( void );
void SendEusart( uint8_t dat );
void printu( const char *str, ...);

#ifdef EUSART_H
#else
#endif	// EUSART_C
#endif	// EUSART_H