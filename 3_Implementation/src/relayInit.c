#define F_CPU 16000000

#include <avr/io.h>
#include"floatSwitchInit.h"
#include"relayInit.h"
void relayInit(void)
{
	DDRB |= (1<<1); //set pinB1 as output
	PORTB &= ~(1<<1); //set portB1 low
}