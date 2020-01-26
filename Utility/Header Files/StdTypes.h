/*
 * StdTypes.h
 *
 * Created: 10/31/2019 8:47:22 PM
 *  Author: Hamdy
 */ 


#ifndef STDTYPES_H_
#define STDTYPES_H_

#define __INTTYPES_H_


typedef unsigned char		uint8;
typedef signed char			sint8;
typedef unsigned short		uint16;
typedef signed short		sint16;
typedef unsigned long		uint32;
typedef signed long			sint32;
typedef unsigned long long	uint64;
typedef signed long long	sint64;

typedef unsigned char		uint8_t;
typedef signed char			sint8_t;
typedef unsigned short		uint16_t;
typedef signed short		sint16_t;
typedef unsigned long		uint32_t;
typedef signed long			sint32_t;
typedef unsigned long long	uint64_t;
typedef signed long long	sint64_t;
typedef float				float32;
typedef double				float64;

typedef volatile uint8_t  vuint8_t;
typedef volatile sint8_t  vsint8_t;
typedef volatile uint16_t  vuint16_t;
typedef volatile sint16_t  vsint16_t;
typedef volatile uint32_t  vuint32_t;
typedef volatile sint32_t  vsint32_t;
typedef volatile uint64_t  vuint64_t;
typedef volatile sint64_t  vsint64_t;

typedef volatile uint8_t   vuint8;
typedef volatile sint8_t   vsint8;
typedef volatile uint16_t  vuint16;
typedef volatile sint16_t  vsint16;
typedef volatile uint32_t  vuint32;
typedef volatile sint32_t  vsint32;
typedef volatile uint64_t  vuint64;
typedef volatile sint64_t  vsint64;

typedef enum
{
	FALSE,
	TRUE,
}bool;

typedef enum
{
	LOW=0,
	HIGH=1,
}digitalState;

typedef enum
{
	PIN0=0,PIN1=1,PIN2=2,PIN3=3,
	PIN4=4,PIN5=5,PIN6=6,PIN7=7,
}pinNumber;

#endif /* STDTYPES_H_ */
