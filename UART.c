/*
 * UART.c
 *
 * Created: 6/28/2018 6:47:30 PM
 *  Author: Fadi
 */ 
#include <avr/io.h>
#include <avr/delay.h>
#include "UART.h"
#include "macros.h"

void UART_init(void)
{
	//set baud rate as 9600 
	set_bit(UCSRA, 1);  //enable x2 speed
	UBRRL=12;
	UBRRH=0;
	UCSRC=0x06; //  00000110  set B1,B2(8bit mode)  Clear B3( 1 stop bit)   Clear B4,B5(no parity)
	UCSRC = 0b00000110;
	UCSRB = 0b00001000;;// Transmitter enable , 8-bits mode
	
}
void uart_sendchar(unsigned char data){
	while((UCSRA & (1<<UDRE))==0); // wait until buffer is empty
	UDR=data;
}

void send_string(char s[])
{
	int i =0;
	
	while (s[i] != 0x00)
	{
		uart_sendchar(s[i]);
		i++;
	}
}
