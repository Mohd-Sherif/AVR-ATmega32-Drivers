/*
 * Button.h
 *
 * Created: 18/09/2021 10:14:59 PM
 *  Author: Mohamed Sherif
 */ 

#ifndef BUTTON_H_
#define BUTTON_H_

/*
Function Name        : Button_vinit
Function Returns     : void
Function Arguments   : unsigned char port,unsigned char pin
Function Description : define the given pin in the given port as input pin
*/
void Button_vinit(unsigned char port,unsigned char pin);

/*
Function Name        : Button_u8read
Function Returns     : unsigned char
Function Arguments   : unsigned char port,unsigned char pin
Function Description : Returns 0 or 1 depend on the status of the button(pressed or not)
*/
unsigned char Button_u8read(unsigned char port,unsigned char pin);

/*
	Function Name        : Button_vpullupEN
	Function Returns     : void
	Function Arguments   : unsigned char port,unsigned char pin,unsigned char enable
     Function Description : Enable and disenable pull up resistor to the given pin at the given port 
*/
void Button_vpullupEN(unsigned char port,unsigned char pin,unsigned char enable);

#endif /* BUTTON_H_ */