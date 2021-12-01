/**
 * @file floatSwitchInit.c
 * @author Mohanraj D
 * @brief Initialize port for sensors
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/**
 * Including files  
 */
#include <avr/io.h>
#include"floatSwitchInit.h"
#include"relayInit.h"

void floatSwitchInit(void)
{
	/* top sensor */
	DDRD &= ~(1<<0);	//set pinD0 as input
	PORTD |= (1<<0); //use pull-up resistor on pinD0
	
	/* bottom sensor */
	DDRD &= ~(1<<1);	//set pinD1 as input
	PORTD |= (1<<1); //use pull-up resistor on pinD1
}
