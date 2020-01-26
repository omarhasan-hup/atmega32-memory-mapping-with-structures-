/**
 * @file <microController Configuration .h>
 * @brief <Define Here All MCU Prepheral and Cpu Register Adresses>
 *
 * <This File Contains ALL ATmega32A Register Address and Memory Map Information>
 *
 * @author <	Hamdy Ahmed Hamdy Elasawy  - Hamdy.elasawy@gmail.com	- in/hamdyelasawy/ >
 * @date <2019>
 *
 */

#ifndef UC_CONFIGURATION_H_S
#define UC_CONFIGURATION_H_S

#define _AVR_ATMEGA32A_H_INCLUDED

	#include "Macros.h"
	#include "StdTypes.h"
/******************************* CPU Debugger Defines  *****************************************************/

#define  DEBUG_USER		0

#if DEBUG_USER

#define ERRORMSG(Msg)			{printf(Msg);}
#else
#define ERRORMSG(Msg)			{}
#endif
							  
/******************************* CPU Related Defines *******************************************************/
#define F_CPU		(16000000U)

/******************************* CPU Internal Registers <SFRs & GPRs> **************************************/
#define IO_OFFSET	(0x20)
#define SRAM_OFFSET	(0x60)
#define CPU_REG		((vuint8_t *)0x00)
#define NULL	((void *) 0x0FFF)

#define ATMEGA32_SREG		((reg8*)(0x3F+IO_OFFSET))
#define ATMEGA32A_MCUCR		((reg8*)(0x35+IO_OFFSET))
#define ATMEGA32_MCUCSR		((reg8*)(0x34+IO_OFFSET))
#define ATMEGA32_GICR		((reg8*)(0x3B+IO_OFFSET))
#define GIFR				((reg8*)(0x3A+IO_OFFSET))

/*****************************************  Attribute Defines FOR AVR Interrupt Handling ************************************************/
#define ISR_NONBLOCK 	__attribute__((interrupt))
#define ISR_BLOCK
#define ISR_NAKED      	__attribute__((naked))
#define ISR_ALIASOF(v) 	__attribute__((alias(__STRINGIFY(v))))
#define _VECTOR(N) 		__vector_ ## N

#define ISR(V,...)	void V (void) __attribute__ ((signal)) __VA_ARGS__;\
				    void V (void)
/******************************************* Global Interrupt Related Macros **************************************/
	#define GLOBAL_INTERRUPT_ENABLE()	{ATMEGA32_SREG->bits.b7=1;}
	#define GLOBAL_INTERRUPT_DISABLE()	{ATMEGA32_SREG->bits.b7=0;}
	
/******************************************* User Types For AVR MCU **************************************/

		typedef union
	{
		vuint8_t allRegister;
		struct
		{
			vuint8_t b0:1;
			vuint8_t b1:1;
			vuint8_t b2:1;
			vuint8_t b3:1;
			vuint8_t b4:1;
			vuint8_t b5:1;
			vuint8_t b6:1;
			vuint8_t b7:1;
		}bits;
	}reg8;

	typedef struct
	{
		reg8 pin;
		reg8 ddr;
		reg8 port;
	}DIO_Struct;



#endif /* UC_CONFIGURATION_H_ */
