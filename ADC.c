/*
 * ADC.c
 *
 * Created: 6/30/2018 6:37:23 PM
 *  Author: Fadi
 */ 
#include <avr/io.h>
#include "ADC.h"
#include "macros.h"

void init_adc()
{
	
//set pin ADC0 to input
clr_bit(DDRA, 0);


//Single ended input adc0
//Vref = 2.56  10 bit resolution
ADMUX = 0b11000000;

//control register
ADCSRA = 0;
ADCSRA |= 0b111; //128 prescaler
set_bit(ADCSRA, 3); //enable interrupt
set_bit(ADCSRA, 7); //enable adc


//set ADC to work with timer1 CTC
clr_bit(SFIOR, 5);
clr_bit(SFIOR, 6);
clr_bit(SFIOR, 7);
}