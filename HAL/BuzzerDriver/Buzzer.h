/*
 * Buzzer.h
 *
 * Created: 18/09/2021 10:22:35 PM
 *  Author: Mohamed Sherif
 */ 

#ifndef BUZZER_H_
#define BUZZER_H_

/*
Function Name        : Buzzer_vinit
Function Returns     : void
Function Arguments   : unsigned char port,unsigned char pin
Function Description : Initialize the pin as an output pin to connect the Buzzer.
*/
void Buzzer_vinit(unsigned char port,unsigned char pin);

/*
Function Name        : Buzzer_vON
Function Returns     : void
Function Arguments   : unsigned char port,unsigned char pin
Function Description : Turn on the Buzzer connected to the given pin and port.
*/
void Buzzer_vON(unsigned char port,unsigned char pin);

/*
Function Name        : Buzzer_vOFF
Function Returns     : void
Function Arguments   : unsigned char port,unsigned char pin
Function Description : Turn off the Buzzer connected to the given pin and port.
*/
void Buzzer_vOFF(unsigned char port,unsigned char pin);

/*
Function Name        : Buzzer_vtog
Function Returns     : void
Function Arguments   : unsigned char port,unsigned char pin
Function Description : Toggle the Buzzer connected to the given pin and port.
*/
void Buzzer_vtog(unsigned char port,unsigned char pin);

/*
Function Name        : Buzzer_u8read
Function Returns     : unsigned char
Function Arguments   : unsigned char port,unsigned char pin
Function Description : Returns 1 if the value of the given pin is high and zero if the value is low
*/
unsigned char Buzzer_u8read(unsigned char port,unsigned char pin);

#endif /* BUZZER_H_ */