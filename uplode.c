//#define USING_K1 

#include <reg51.h>
#include <intrins.h>
//#include "DigitalNumber.h"
//#include "Buttons.h"
#include "Music.h"

sbit SER = P3^4;
sbit SCK = P3^6;
sbit RCK = P3^5;
/*
void SendTo595(unsigned char byteData){   
	char i=0;
	for(;i<8;i++){
		SER = byteData>>7;         
		byteData= byteData<<1;      
		SCK = 1;
		_nop_();
		_nop_();
		SCK = 0;     
	}
	RCK = 1;
	_nop_(); 
	_nop_();
	RCK = 0; 
}

void main(){
	SendTo595(0xF5);
	P0 = 0x0F;
	P2 = 0x0F;
	while (1);
}

*/
/*
void main(){
	while (1){
		Player(low1, 500);
		Player(low2, 500);
		Player(low3, 500);
		Player(low4, 500);
		Player(low5, 500);
		Player(low6, 500);
		Player(low7, 500);
		
		
	}
}
*/ 
/*
void Delay250ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	i = 2;
	j = 193;
	k = 57;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


void Delay500ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	i = 4;
	j = 129;
	k = 119;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


void main(){
	unsigned char i = 0;
	for (;i<3;i++){
		Player(hig3, 500);
		Player(mid7, 250);
		Player(mid6, 500);
		Player(hig3, 750);
	}
	Player(hig3, 500);
	Player(mid7, 250);
	Player(mid6,1250);
	for (i=0;i<3;i++){
		Player(hig3, 500);
		Player(mid7, 250);
		Player(mid6, 500);
		Player(hig3, 750);
	}	
	Player(hig3,1000);
	Player(mid7,1000);

	Delay500ms();
	Player(low6, 250);
	Player(low7, 250);
	Player(mid1, 500);
	Player(low7, 250);
	Player(mid1, 500);
	Player(low6, 250);
	Player(low5, 250);
	Player(low4,1250);
	
	Delay500ms();
	Player(low6, 250);
	Player(low7, 250);
	Player(mid1, 500);
	Player(low7, 250);
	Player(mid1, 500);
	Player(mid3, 250);
	Player(mid4, 250);
	Player(mid3,1250);
	
	Delay500ms();
	Player(low6, 250);
	Player(low7, 250);
	Player(mid1, 500);
	Player(low7, 250);
	Player(mid1, 500);
	Player(low6, 250);
	Player(low5, 250);
	Player(low4,1000);
	Player(low4, 250);
	Player(low5, 750);
	Player(low6,2250);

	Delay250ms();
	Player(low6, 250);//ki
	Player(low7, 250);//mi
	Player(low6, 250);//ga
	Player(mid1, 500);//o
	Player(mid2, 250);//si
	Player(mid1, 500);//e
	Player(mid3, 500);//te
	Player(mid4, 500);//ku
	Player(mid1, 500);//re
	Player(mid4, 500);//ta
	Player(mid5, 500);//n
	Player(mid6, 500);//da
	Player(mid7, 500);//mou
	Player(mid6, 500);//ko
	Player(mid4, 500);//wa
	Player(mid1, 500);//ku
	Player(mid4, 500);//na
	Player(mid4, 500);//i
	Player(mid6, 250);//ni
	Player(mid7, 500);//gi
	Player(hig1, 500);//i
	Player(mid5, 250);//te
	Player(mid4, 500);//i
	Player(mid2, 500);//te
	Player(mid1, 500);//ku
	Player(mid4, 250);//re
	Player(mid4, 750);//ta
	Player(mid6, 250);//ko
	Player(mid7, 500);//no
	Player(hig1, 500);//te
	Player(mid5, 250);//wo
	Player(mid4, 500);//ha
	Player(mid3, 500);//na
	Player(mid4, 500);//sa
	Player(mid6, 250);//na
	Player(mid7, 750);//kya
	Player(mid6, 250);//da
	Player(mid7, 500);//me
	Player(hig1,2000);//da
	
	
	for(i=0;i<2;i++){
		Delay250ms();
		Player(mid1, 250);
		Player(low6, 500);
		Player(low7,1250);
	}
	
	Player(low4,1000);
	Delay250ms();
	Player(mid6, 500);//hi
	Player(mid5, 250);//to
	Player(mid6, 500);//ri
	Player(mid4, 250);//de
	Player(mid3, 500);//mo
	Player(mid6, 500);//yu
	Player(mid7, 500);//ku
	Player(hig1,1000);//yo
	Player(mid6, 500);
	Player(mid5, 250);
	Player(mid6, 500);
	Player(mid3, 250);
	Player(mid2, 500);
	Player(mid6, 500);
	Player(mid7, 500);
	Player(hig1,1000);
	Player(mid6, 500);
	Player(mid5, 250);
	Player(mid6, 500);
	Player(mid3, 250);
	Player(mid2, 500);
	Player(mid6, 500);
	Player(mid7, 500);
	Player(hig1, 750);
	Player(mid5, 250);
	Player(mid6, 500);
	Player(mid5, 500);
	Player(mid2, 500);
	Player(mid1, 500);
	Player(low7, 500);
	Player(low6, 250);
	Player(low5, 250);
	Player(low5, 500);
	/*
	Delay250ms();
	Player(mid6, 500);
	Player(mid5, 250);
	Player(mid6, 500);
	Player(mid3, 250);
	Player(mid2, 500);
	Player(mid6, 500);
	Player(mid7, 500);
	Player(hig1,1000);
	Player(mid6, 500);
	Player(mid5, 250);
	Player(mid6, 500);
	Player(mid3, 250);
	Player(mid3, 500);
	Player(mid6, 500);
	Player(mid7, 500);
	Player(hig1, 250);
	Player(mid6, 750);
	Player(mid6, 750);
	Player(mid5, 250);
	Player(mid6, 500);
	Player(mid3, 250);
	Player(mid2, 500);
	Player(mid6, 500);
	Player(mid7, 500);
	Player(hig1, 750);
	Player(mid6, 250);
	Player(mid7, 500);
	Player(mid6, 500);
	Player(mid2, 500);
	Player(mid1, 500);
	Player(low7, 500);
	Player(low7, 500);
	Player(low6, 750);
	
	Delay250ms();
	Player(low6, 500);
	Player(low5, 250);
	Player(low6, 500);
	Player(low3, 250);
	Player(low2, 500);
	Player(low6, 500);
	Player(low7, 500);
	Player(mid1,1000);
	Player(low6, 500);
	Player(low5, 250);
	Player(low6, 500);
	Player(low3, 250);
	Player(low2, 500);
	Player(low6, 500);
	Player(low7, 500);
	Player(mid1,1000);
	Player(low6, 500);
	Player(low5, 250);
	Player(low6, 500);
	Player(low3, 250);
	Player(low2, 500);
	Player(low6, 500);
	Player(low7, 500);
	Player(mid1, 750);
	Player(low6, 250);
	Player(low7, 500);
	Player(low6, 500);
	Player(low2, 500);
	Player(low1, 500);
	Player(llow7,500);
	Player(llow7,500);
	Player(llow6,250);
	Player(llow6,500);
	
	Delay500ms();
	Player(mid7, 500);
	Player(mid6, 250);
	Player(mid7, 500);
	Player(mid4, 250);
	Player(mid3, 500);
	Player(mid7, 500);
	Player(hig1, 250+250);
	Player(hig2,1000);
	Player(mid7, 500);
	Player(mid6, 250);
	Player(mid7, 500);
	Player(mid4, 250);
	Player(mid3, 500);
	Player(mid7, 500);
	Player(hig1,1000);
	Player(mid7, 500);
	Player(mid6, 250);
	Player(mid7, 500);
	Player(mid4, 250);
	Player(mid3, 500);
	Player(mid7, 500);
	Player(hig1, 500);
	Player(hig2, 750);
	Player(mid7, 250);
	Player(hig1, 500);
	Player(mid7, 500);
	Player(mid3, 500);
	Player(mid2, 500);
	Player(mid1, 500);
	Player(mid1, 250+250);
	Player(low7, 250);
	Player(low7, 250);
	
	Delay250ms();
	Player(mid7, 500);
	Player(mid6, 250);
	Player(mid7, 500);
	Player(mid4, 250);
	Player(mid3, 500);
	Player(mid4, 500);
	Player(hig1, 500);
	Player(hig2,1000);
	Player(mid7, 500);
	Player(mid6, 250);
	Player(mid7, 500);
	Player(mid4, 250);
	Player(mid3, 500);
	Player(mid4, 500);
	Player(hig1, 500);
	Player(hig2, 250);
	Player(mid7, 750);
	Player(mid7, 500);
	Player(mid6, 250);
	Player(mid7, 500);
	Player(mid4, 250);
	Player(mid3, 500);
	Player(mid7, 500);
	Player(hig1, 250+250);
	Player(hig2, 750);
	Player(mid7, 250);
	Player(hig1, 500);
	Player(mid7, 500);
	Player(mid3, 500);
	Player(mid2, 500);
	Player(mid1, 500);
	Player(mid1, 500);
	Player(low7, 250);
	Player(low7, 500);
	
	Delay250ms();
	Player(low7, 500);
	Player(low6, 250);
	Player(low7, 500);
	Player(low4, 250);
	Player(low3, 250);
	Player(llow7,250);
	Player(low4, 250);
	Player(low3, 250);
	Player(mid1, 500);
	Player(mid2, 750);
	Player(low7, 250);
	Player(mid1, 500);
	Player(low7, 250+500);
	Player(low3, 500);
	Player(low2, 500);
	Player(low1, 500);
	Player(low7,2000);
	
	
	
	
	while(1);
	//Player(high7, 1000);

}






*/












