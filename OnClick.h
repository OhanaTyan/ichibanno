#ifndef ONCLICK_H
#define ONCLICK_H

#include <REG51.h>
#include <intrins.h>


// low level -> Clicked

int onPressK1(){ return (~P3)&0x02;}
int onPressK2(){ return (~P3)&0x01;}
int onPressK3(){ return (~P3)&0x04;}
int onPressK4(){ return (~P3)&0x08;}






#endif