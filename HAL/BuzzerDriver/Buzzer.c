/*
 * Buzzer.c
 *
 * Created: 18/09/2021 10:22:20 PM
 *  Author: Mohamed Sherif
 */ 

#include "DIO.h"

void Buzzer_vinit(unsigned char port,unsigned char pin){
	DIO_vsetpin_dir(port,pin,1);
}

void Buzzer_vON(unsigned char port,unsigned char pin){
	DIO_vwritepin(port,pin,1);
}

void Buzzer_vOFF(unsigned char port,unsigned char pin){
	DIO_vwritepin(port,pin,0);
}

void Buzzer_vtog(unsigned char port,unsigned char pin){
	DIO_vtogglepin(port,pin);
}

unsigned char Buzzer_u8read(unsigned char port,unsigned char pin){
	return DIO_u8readpin(port,pin);
}
