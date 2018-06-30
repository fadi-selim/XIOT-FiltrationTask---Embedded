/*
 * CFile1.c
 *
 * Created: 6/28/2018 9:57:43 PM
 *  Author: Fadi
 */ #include <avr/interrupt.h>
#include "INT.h"

void Enable_ExInterrupt(void)
{

	MCUCR |= (1<<1); // falling edge
	GICR |=(1<<6); // enable INT0 set pin6
	SREG |=(1<<7); // set GIE pin7
	
}