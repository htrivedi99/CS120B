/*	Author: Het Trivedi - htriv001
 *  Partner(s) Name: Giuseppi Pelayo - gpela001
 *	Lab Section: 22
 *	Assignment: Lab #2  Exercise #2
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
    DDRC = 0xFF; PORTC = 0x00;
    unsigned char spot1 = 0x00;
    unsigned char spot2 = 0x00;
    unsigned char spot3 = 0x00;
    unsigned char spot4 = 0x00;
    unsigned char cntAvail = 0x04;
     /* Insert your solution below */
     while (1) {

       spot1 = PINA & 0x01;
       spot2 = (PINA & 0x02) >> 1;
       spot3 = (PINA & 0x04) >> 2;
       spot4 = (PINA & 0x08) >> 3;

       cntAvail = cntAvail - spot1 - spot2 - spot3 - spot4;
       PORTC = cntAvail;

     }
     return 1;
 }
