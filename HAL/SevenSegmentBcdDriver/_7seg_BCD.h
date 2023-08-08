/*
 * _7seg_BCD.h
 *
 * Created: 22/09/2021 03:52:58 PM
 *  Author: Mohamed Sherif
 */ 

#ifndef _7SEG_BCD_H_
#define _7SEG_BCD_H_

/*
Function Name        : _7seg_BCD_vinit_LOWnibble
Function Returns     : void
Function Arguments   : unsigned char port
Function Description : Initialize the first 4 pins in the chosen port as output to connect the 7 Segment BCD.
*/
void _7seg_BCD_vinit_LOWnibble(unsigned char port);

/*
Function Name        : _7seg_BCD_vinit_HIGHnibble
Function Returns     : void
Function Arguments   : unsigned char port
Function Description : Initialize the last 4 pins in the chosen port as output to connect the 7 Segment BCD.
*/
void _7seg_BCD_vinit_HIGHnibble(unsigned char port);

/*
Function Name        : _7seg_BCD_vwrite_LOWnibble
Function Returns     : void
Function Arguments   : unsigned char port,unsigned char number
Function Description : Write the number to the chosen port pins.
*/
void _7seg_BCD_vwrite_LOWnibble(unsigned char port,unsigned char number);

/*
Function Name        : _7seg_BCD_vwrite_HIGHnibble
Function Returns     : void
Function Arguments   : unsigned char port,unsigned char number
Function Description : Write the number to the chosen port pins.
*/
void _7seg_BCD_vwrite_HIGHnibble(unsigned char port,unsigned char number);

#endif /* _7SEG_BCD_H_ */