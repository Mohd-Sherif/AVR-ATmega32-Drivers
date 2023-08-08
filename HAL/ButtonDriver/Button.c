/*
 * Button.c
 *
 * Created: 18/09/2021 10:14:41 PM
 *  Author: Mohamed Sherif
 */ 

#include "DIO.h"

void Button_vinit(unsigned char port,unsigned char pin){
	DIO_vsetpin_dir(port,pin,0);
}

unsigned char Button_u8read(unsigned char port,unsigned char pin){
	return DIO_u8readpin(port,pin);
}

void Button_vpullupEN(unsigned char port,unsigned char pin,unsigned char enable){
	DIO_vpullupEN(port,pin,enable);
}
