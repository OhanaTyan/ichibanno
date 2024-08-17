#ifndef ONCLICK_H
#define ONCLICK_H

#include <REG51.h>
#include <intrins.h>


// low level -> Clicked

#if defined(USING_K1) | defined(USING_ALL)
int onPressedK1(){ return (~P3)&0x02;}
#endif
#if defined(USING_K2) | defined(USING_ALL)
int onPressedK2(){ return (~P3)&0x01;}
#endif
#if defined(USING_K3) | defined(USING_ALL)
int onPressedK3(){ return (~P3)&0x04;}
#endif
#if defined(USING_K4) | defined(USING_ALL)
int onPressedK4(){ return (~P3)&0x08;}
#endif

/*
	while (1){
		if (onPressedK1()){
			Delay10ms();
			if (OnPressedK1()){
				// DoSomething;	
				while (OnPressedK1());
			}
		}


*/


#endif