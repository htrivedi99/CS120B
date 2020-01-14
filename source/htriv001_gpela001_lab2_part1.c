/*	Author: Het Trivedi - htriv001
 *  Partner(s) Name: Giuseppi Pelayo - gpela001
 *	Lab Section: 22
 *	Assignment: Lab #2  Exercise #1
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */

 #include <avr/io.h>
 #ifdef _SIMULATE_
 #include "simAVRHeader.h"
 #endif

 int main(void) {
    DDRA = 0x00; PORTA = 0xFF;
    DDRB = 0xFF; PORTB = 0x00;
    unsigned char garageDoor = 0x00;
    unsigned char lightSensor = 0x00;
     /* Insert your solution below */
     while (1) {

        garageDoor = PINA & 0x01;
		  lightSensor = PINA & 0x02;
        if(garageDoor == 0x01 && lightSensor == 0x00){
           PORTB = 0x01;
        }else{
           PORTB = 0x00;
        }

     }
     return 1;
 }
