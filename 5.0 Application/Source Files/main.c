/*
 * main.c
 *
 * Created: 11/7/2019 8:10:43 PM
 *  Author: Hamdy
 */ 


#include "ExternalInterrupts_ATmega32A.h"


int main()
{
	ExternalInterrupt_Configure(EXTINT0,EXTINT_RISING);
	AlertButtonInterrupt_Init();
	while(1)
	{
		
	}	
}
