/*
 * CFile1.c
 *
 * Created: 6/30/2018 5:32:03 AM
 *  Author: Fadi
 */ 
#include <avr/io.h>
#include <avr/delay.h>
#include "Timer1.h"
#include "macros.h"

void Timer1_3sec_init()
{
	TCCR1B = (1<<WGM12);
	OCR1A = 2930;
	TIMSK = (1<<OCIE1A);
	TCCR1B |= (1<<CS10) | (1<<CS12);;
	
}