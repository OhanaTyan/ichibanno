#ifndef MUSIC_H
#define MUSIC_H

/*
void llow1()		//@11.0592MHz
{
	unsigned char i, j;

	i = 14;
	j = 199;
	do
	{
		while (--j);
	} while (--i);
}

void llow2()		//@11.0592MHz
{
	unsigned char i, j;

	i = 13;
	j = 68;
	do
	{
		while (--j);
	} while (--i);
}

void llow3()		//@11.0592MHz
{
	unsigned char i, j;

	_nop_();
	i = 11;
	j = 235;
	do
	{
		while (--j);
	} while (--i);
}

void llow4()		//@11.0592MHz
{
	unsigned char i, j;

	i = 11;
	j = 74;
	do
	{
		while (--j);
	} while (--i);
}
*/
void llow5()		//@11.0592MHz
{
	unsigned char i, j;

	i = 10;
	j = 46;
	do
	{
		while (--j);
	} while (--i);
}

void llow6()		//@11.0592MHz
{
	unsigned char i, j;

	i = 9;
	j = 44;
	do
	{
		while (--j);
	} while (--i);
}

void llow7()		//@11.0592MHz
{
	unsigned char i, j;

	i = 8;
	j = 70;
	do
	{
		while (--j);
	} while (--i);
}


void low1()		//@11.0592MHz
{
	unsigned char i, j;

	_nop_();
	i = 7;
	j = 212;
	do
	{
		while (--j);
	} while (--i);
}

void low2()		//@11.0592MHz
{
	unsigned char i, j;

	i = 7;
	j = 21;
	do
	{
		while (--j);
	} while (--i);
}

void low3()		//@11.0592MHz
{
	unsigned char i, j;

	i = 6;
	j = 107;
	do
	{
		while (--j);
	} while (--i);
}

void low4()		//@11.0592MHz
{
	unsigned char i, j;

	i = 6;
	j = 31;
	do
	{
		while (--j);
	} while (--i);
}

void low5()		//@11.0592MHz
{
	unsigned char i, j;

	_nop_();
	i = 5;
	j = 143;
	do
	{
		while (--j);
	} while (--i);
}

void low6()		//@11.0592MHz
{
	unsigned char i, j;

	_nop_();
	i = 5;
	j = 14;
	do
	{
		while (--j);
	} while (--i);
}

void low7()		//@11.0592MHz
{
	unsigned char i, j;

	_nop_();
	i = 4;
	j = 157;
	do
	{
		while (--j);
	} while (--i);
}

void mid1()		//@11.0592MHz
{
	unsigned char i, j;

	i = 4;
	j = 106;
	do
	{
		while (--j);
	} while (--i);
}

void mid2()		//@11.0592MHz
{
	unsigned char i, j;

	i = 4;
	j = 10;
	do
	{
		while (--j);
	} while (--i);
}

void mid3()		//@11.0592MHz
{
	unsigned char i, j;

	i = 3;
	j = 181;
	do
	{
		while (--j);
	} while (--i);
}

void mid4()		//@11.0592MHz
{
	unsigned char i, j;

	_nop_();
	i = 3;
	j = 141;
	do
	{
		while (--j);
	} while (--i);
}

void mid5()		//@11.0592MHz
{
	unsigned char i, j;

	i = 3;
	j = 70;
	do
	{
		while (--j);
	} while (--i);
}

void mid6()		//@11.0592MHz
{
	unsigned char i, j;

	i = 3;
	j = 5;
	do
	{
		while (--j);
	} while (--i);
}

void mid7()		//@11.0592MHz
{
	unsigned char i, j;

	i = 2;
	j = 205;
	do
	{
		while (--j);
	} while (--i);
}

void high1()		//@11.0592MHz
{
	unsigned char i, j;

	_nop_();
	i = 2;
	j = 179;
	do
	{
		while (--j);
	} while (--i);
}

void high2()		//@11.0592MHz
{
	unsigned char i, j;

	i = 2;
	j = 131;
	do
	{
		while (--j);
	} while (--i);
}

void high3()		//@11.0592MHz
{
	unsigned char i, j;

	_nop_();
	i = 2;
	j = 88;
	do
	{
		while (--j);
	} while (--i);
}
/*
void high4()		//@11.0592MHz
{
	unsigned char i, j;

	i = 2;
	j = 68;
	do
	{
		while (--j);
	} while (--i);
}

void high5()		//@11.0592MHz
{
	unsigned char i, j;

	_nop_();
	i = 2;
	j = 32;
	do
	{
		while (--j);
	} while (--i);
}

void high6()		//@11.0592MHz
{
	unsigned char i, j;

	_nop_();
	i = 2;
	j = 1;
	do
	{
		while (--j);
	} while (--i);
}

void high7()		//@11.0592MHz
{
	unsigned char i;

	_nop_();
	i = 230;
	while (--i);
}


*/

void Timer0Init(void)		//1??@11.0592MHz
{
	//AUXR &= 0x7F;		//?????12T??
	//TMOD &= 0xF0;		//???????
	TMOD = 0x01;		//???????
	TL0 = 0x66;		//??????
	TH0 = 0xFC;		//??????
	//TF0 = 0;		//??TF0??
	ET0 = 1;
	TR0 = 1;		//???0????
	EA = 1;
}

#define hig1 high1
#define hig2 high2
#define hig3 high3
#define hig4 high4
#define hig5 high5
#define hig6 high6
#define hig7 high7


extern int TIME_COUNTER = 0;

#include "DigitalNumber.h"

// time: 1 per ms
void Player(void (*tone)(),int time){
	Timer0Init();
	TIME_COUNTER = 0;
	
	while (TIME_COUNTER < time){
		//show_number(TIME_COUNTER%10, POS0);
		//show_number((TIME_COUNTER/10)%10, POS1);
		//show_number((TIME_COUNTER/100)%10, POS2);
		//show_number((TIME_COUNTER/1000)%10, POS3);
		//show_number((TIME_COUNTER/10000)%10, POS4);
		tone();
		//P2 = 0x00;
		P2 = 0xFF;
		P2 = 0x00;
		//P2 = 0xFF;
		//P2 = 0x00;
	}
}

void interrupt_handler() interrupt 1 using 1{
	TIME_COUNTER++;
	Timer0Init();
}




#endif