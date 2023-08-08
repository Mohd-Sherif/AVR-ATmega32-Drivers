/*
 * _7seg_BCD.c
 *
 * Created: 22/09/2021 03:52:35 PM
 *  Author: Mohamed Sherif
 */ 

#include "DIO.h"
#include "std_macros.h"

void _7seg_BCD_vinit_LOWnibble(unsigned char port){
	unsigned char i;
	for(i=0;i<=3;i++)DIO_vsetpin_dir(port,i,1);
}

void _7seg_BCD_vinit_HIGHnibble(unsigned char port){
	unsigned char i;
	for(i=4;i<=7;i++)DIO_vsetpin_dir(port,i,1);
}

void _7seg_BCD_vwrite_LOWnibble(unsigned char port,unsigned char number){
	unsigned char i;
	for(i=0;i<=3;i++)DIO_vwritepin(port,i,READ_BIT(number,i));
	// Another Method:
	//DIO_vwrite_LOWnibble(port,number);
}

void _7seg_BCD_vwrite_HIGHnibble(unsigned char port,unsigned char number){
	unsigned char i;
	number<<=4;
	for(i=4;i<=7;i++)DIO_vwritepin(port,i,READ_BIT(number,i));
	// Another Method:
	//DIO_vwrite_HIGHnibble(port,number);
}