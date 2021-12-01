/**
 * @file relayInit.c
 * @author Mohanraj D
 * @brief 
 * @version 0.1
 * @date 2021-12-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
/**
 * Including Files  
 */
#include <avr/io.h>
#include"floatSwitchInit.h"
#include"relayInit.h"


void relayInit(void)
{

	DDRB |= (1<<1); //set pinB1 as output

	PORTB &= ~(1<<1); //set portB1 low

}