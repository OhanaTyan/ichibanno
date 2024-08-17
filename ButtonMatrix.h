#ifndef BUTTON_MATRIX
#define BUTTON_MATRIX


int OnPressedS1(){
	P1 = 0xF7;
	return P1 == 0x77;	
}

int OnPressedS2(){
	P1 = 0xFB;
	return P1 == 0x7B;
}

int OnPressedS3(){
	P1 = 0xFD;
	return P1 == 0x7D;
}

int OnPressedS4(){
	P1 = 0xFE;
	return P1 == 0x7E;
}

int OnPressedS5(){
	P1 = 0xF7;
	return P1 == 0xB7;
}

int OnPressedS6(){
	P1 = 0xFB;
	return P1 == 0xBB;
}

int OnPressedS7(){
	P1 = 0xFD;
	return P1 == 0xBD;
}

int OnPressedS8(){
	P1 = 0xFE;
	return P1 == 0xBE;
}

int OnPressedS9(){
	P1 = 0xF7;
	return P1 == 0xD7;
}

int OnPressedS10(){
	P1 = 0xFB;
	return P1 == 0xDB;
}

int OnPressedS11(){
	P1 = 0xFD;
	return P1 == 0xDD;
}

int OnPressedS12(){
	P1 = 0xFE;
	return P1 == 0xDE;
}

int OnPressedS13(){
	P1 = 0xF7;
	return P1 == 0xE7;
}

int OnPressedS14(){
	P1 = 0xFB;
	return P1 == 0xEB;
}

int OnPressedS15(){
	P1 = 0xFD;
	return P1 == 0xED;
}

int OnPressedS16(){
	P1 = 0xFE;
	return P1 == 0xEE;
}










#endif