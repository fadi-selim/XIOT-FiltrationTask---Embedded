/*
 * XIOT_task.c
 *
 * Created: 6/30/2018 4:43:58 AM
 *  Author: Fadi
 */ 


#include <avr/io.h>
#include <avr/interrupt.h>
#include "macros.h"
#include "UART.h"
#include "Timer1.h"
#include "ADC.h"


 int flag = 1 ;
int main(void)
{
	/************************SETTLING GPIO******************************/
	set_bit(DDRB,PB0); //set as output
	clr_bit(DDRD,PD2);
	set_bit(PORTD,PD2);
	
	/***********************SETTLING INTIALIZATION*************************/
	sei();
	Enable_ExInterrupt();
	UART_init();
	Timer1_3sec_init();
	init_adc();
	/***********************INTIALLY LED IS OFF******************/
	clr_bit(PORTB,PB0);
 
    while(1)
    {
        //TODO:: Please write your application code 
    }
}

/********************************LED TOGGLING AND SHOWING LED STATUS IN UART***********************************/ 
ISR(INT0_vect)
{
	toggle_bit(PORTB,0);
	if (flag==0)
	{flag++;send_string("LED IS ON");send_string("\n\r");}
	else if (flag==1)
	{flag--;send_string("LED IS OFF");send_string("\n\r");}
	
}
/********************************HANDLING ADC WITH UART TO READ VALUE EVERY 3 SECONDS***********************************/ 
ISR (TIMER1_COMPA_vect)    // Timer1 ISR
{
	set_bit(ADCSRA,6);
}

ISR(ADC_vect)
{
	
	//read temperature in Celesius
	unsigned int temp_in_C = ADC/4; // ------->> Vref/2^10 = 2.5*10^-3 = 1 /400
	
	
	char temperature_number_text [10];
	sprintf(temperature_number_text, "Temperature of LM35 %d C", temp_in_C);
	
	send_string(temperature_number_text);send_string("\n\r");
}