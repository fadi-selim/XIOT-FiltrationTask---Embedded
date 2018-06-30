/*
 * UART.h
 *
 * Created: 6/28/2018 6:47:13 PM
 *  Author: Fadi
 */ 


#ifndef UART_H_
#define UART_H_

void uart_init();
void init_uart();

void uart_sendchar(unsigned char data);

void send_string(char s[]);

#endif /* UART_H_ */