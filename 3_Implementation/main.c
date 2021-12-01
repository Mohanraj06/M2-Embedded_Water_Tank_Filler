
/**
 * @file main.c
 * @author Mohanraj D
 * @brief project to turn on and off pump automatically using flost sensors
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define F_CPU 16000000
/**
 * Including Files 
 */
#include <avr/io.h>
#include"floatSwitchInit.h"
#include"relayInit.h"

uint8_t top_switch_state;
uint8_t bottom_switch_state;

int main(void)
{
	//Initialize the components
    floatSwitchInit();
    relayInit();
	
    while (1)
	{			
		//if water is above top level, turn off pump
		top_switch_state = PIND & (1<<0);
		if (top_switch_state == 0)
		{
			PORTB &= ~(1<<PORTB1);	
		}
		//if water is below bottom level, turn on pump
		bottom_switch_state = PIND & (1<<1);
		if (bottom_switch_state == (1<<1))
		{
			PORTB |= (1<<PORTB1);
		}
	}
}
