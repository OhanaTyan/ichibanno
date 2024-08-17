#ifndef LED_H
#define LED_H

#include <REG51.h>
#include <intrins.h>

#define D1 (0xFF-(1<<0))
#define D2 (0xFF-(1<<1))
#define D3 (0xFF-(1<<2))
#define D4 (0xFF-(1<<3))
#define D5 (0xFF-(1<<4))
#define D6 (0xFF-(1<<5))
#define D7 (0xFF-(1<<6))
#define D8 (0xFF-(1<<7))

void light(int arguments){
	P2 = arguments;
}

#endif


