/*
 * main.c
 *
 *  Created on: Feb 15, 2015
 *      Author: Andrei
 */
#include <avr/io.h>

int main(void)
{
	// init devices
	DDRA = 0xFF;
	PORTA = 0xFF;
	while(1){
		// processing loop
		PORTA++;

	}
}
