#ifndef DIGITAL_NUMBER
#define DIGITAL_NUMBER

#include <REG51.h>
#include <intrins.h>

#define PRINT0 (0x3F)
#define PRINT1 (0x06)
#define PRINT2 (0x5B)
#define PRINT3 (0x4F)
#define PRINT4 (0x66)
#define PRINT5 (0x6D)
#define PRINT6 (0x7D)
#define PRINT7 (0x07)
#define PRINT8 (0x7F)
#define PRINT9 (0x6F)
#define PRINTA (0x77)
#define PRINTB (0x7C)
#define PRINTC (0x39)
#define PRINTD (0x5E)
#define PRINTE (0x79)
#define PRINTF (0x71)
#define PRINTDOT (0x80)
#define PRINTH (0x76)
#define PRINTBAR (0x40)
#define PRINTP (0x73)
#define PRINTU (0x3E)

#define POS0 (0x00)
#define POS1 (0x04)
#define POS2 (0x08)
#define POS3 (0x0C)
#define POS4 (0x10)
#define POS5 (0x14)
#define POS6 (0x18)
#define POS7 (0x1C)

void show_number(int number, int position){
	P0 = 0x00;
	P2 = position;
	P0 = number;
//	P0 = 0x00;
}



#endif