#include "helper.h"

uint8_t *DigitArrange( uint16_t val, uint8_t digit, uint8_t regex, uint8_t isNeg );

void test_digitArrenge(void){
	STR_EQ( " 0", DigitArrange( 0, 0, 10, 0 ));
	STR_EQ( " 10", DigitArrange( 10, 0, 10, 0 ));
	STR_EQ( " 65535", DigitArrange( 65535, 0, 10, 0 ));
	STR_EQ( " FFFF" , DigitArrange( 0xffff, 0, 16, 1 ));
	STR_EQ( "   123" , DigitArrange( 123, 5, 10, 1 ));
	STR_EQ( "-123" , DigitArrange( -123, 0, 10, 1 ));
	STR_EQ( "-  123" , DigitArrange( -123, 5, 10, 1 ));
}