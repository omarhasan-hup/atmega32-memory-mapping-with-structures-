/*
 * LED.h
 *
 * Created: 11/21/2019 7:14:42 PM
 *  Author: Hamdy
 */ 


#ifndef LED_H_
#define LED_H_

	#include "../../1.0 MCAL/Header Files/DIO_ATmega32A.h"
	#include "../../1.0 MCAL/Header Files/uc_Configuration.h"
	
	typedef enum
	{
		LED_OFF=0,
		LED_OFF_REVERSED=1,
		LED_ON=1,
		LED_ON_REVERSED=0,	
		LED_TOGGLE=2,
	}LEDstate;
	
	typedef struct
	{
		DIO_Struct * LED_Dio;
		pinNumber LED_pin;	
	}ledDatatype;
	
	void LEDSetup(ledDatatype led);
	void LEDControl(ledDatatype led, LEDstate state);
	void LED_UserWarningError(void);
	
#endif /* LED_H_ */
