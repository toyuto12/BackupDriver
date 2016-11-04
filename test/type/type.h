#ifndef _TYPE_H_
#define _TYPE_H_

typedef unsigned char	__bit;

#define _LIB_BUILD
#include "pic16f1783.h"

typedef unsigned char	bool;
typedef signed char		int8_t;
typedef unsigned char	uint8_t;
typedef signed short	int16_t;
typedef unsigned short	uint16_t;
typedef signed int 		int32_t;
typedef unsigned int 	uint32_t;
typedef signed long		int64_t;
typedef unsigned long	uint64_t;

enum {false=0,true};

#define TDD

#endif	// _TYPE_H_