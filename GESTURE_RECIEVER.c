/*******************************************************
This program was created by the
CodeWizardAVR V3.19 Evaluation
Automatic Program Generator
� Copyright 1998-2015 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 12-04-2015
Author  : 
Company : 
Comments: 


Chip type               : ATmega16L
Program type            : Application
AVR Core Clock frequency: 1.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 256
*******************************************************/

#include <io.h>

  
// Declare your global variables here

void main(void)

{
MCUCSR=(1<<JTD);
    MCUCSR=(1<<JTD);
// Declare your local variables here

// Input/Output Ports initialization
// Port A initialization
// Function: Bit7=Out Bit6=Out Bit5=Out Bit4=Out Bit3=Out Bit2=Out Bit1=Out Bit0=Out 
DDRA=(1<<DDA7) | (1<<DDA6) | (1<<DDA5) | (1<<DDA4) | (1<<DDA3) | (1<<DDA2) | (1<<DDA1) | (1<<DDA0);
// State: Bit7=0 Bit6=0 Bit5=0 Bit4=0 Bit3=0 Bit2=0 Bit1=0 Bit0=0 
PORTA=(0<<PORTA7) | (0<<PORTA6) | (0<<PORTA5) | (0<<PORTA4) | (0<<PORTA3) | (0<<PORTA2) | (0<<PORTA1) | (0<<PORTA0);

// Port B initialization
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRB=(0<<DDB7) | (0<<DDB6) | (0<<DDB5) | (0<<DDB4) | (0<<DDB3) | (0<<DDB2) | (0<<DDB1) | (0<<DDB0);
// State: Bit7=T Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTB=(0<<PORTB7) | (0<<PORTB6) | (0<<PORTB5) | (0<<PORTB4) | (0<<PORTB3) | (0<<PORTB2) | (0<<PORTB1) | (0<<PORTB0);

// Port C initialization
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRC=(0<<DDC7) | (0<<DDC6) | (0<<DDC5) | (0<<DDC4) | (0<<DDC3) | (0<<DDC2) | (0<<DDC1) | (0<<DDC0);
// State: Bit7=T Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTC=(0<<PORTC7) | (0<<PORTC6) | (0<<PORTC5) | (0<<PORTC4) | (0<<PORTC3) | (0<<PORTC2) | (0<<PORTC1) | (0<<PORTC0);

// Port D initialization
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRD=(0<<DDD7) | (0<<DDD6) | (0<<DDD5) | (0<<DDD4) | (0<<DDD3) | (0<<DDD2) | (0<<DDD1) | (0<<DDD0);

// State: Bit7=T Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTD=(0<<PORTD7) | (0<<PORTD6) | (0<<PORTD5) | (0<<PORTD4) | (0<<PORTD3) | (0<<PORTD2) | (0<<PORTD1) | (0<<PORTD0);

while (1)
      {    
        if(PINB.1==1 && PINB.2==0 && PINB.3==0 && PINB.4==0) {
            
            if (PINB.0 == 0){
                PORTA.0=0;
                PORTA.1=1;
                PORTA.2=0;
                PORTA.3=1;
                } 
               
            }
          
        else if(PINB.1==0 && PINB.2==0 && PINB.3==0 && PINB.4==1) { 
            if(PINB.5==0){ 
                PORTA.0=1;
                PORTA.1=0;
                PORTA.2=1;
                PORTA.3=0;
            }
            }
            
        else if(PINB.1==0 && PINB.2==0 && PINB.3==1 && PINB.4==1) {
            PORTA.0=0;
            PORTA.1=1;
            PORTA.2=1;
            PORTA.3=0;
            }
            
        else if(PINB.1==1 && PINB.2==1 && PINB.3==0 && PINB.4==0) { 
            
            PORTA.0=1;
            PORTA.1=0;
            PORTA.2=0;
            PORTA.3=1;
            }
          
        else{
           PORTA.0=0;
            PORTA.1=0;
            PORTA.2=0;
            PORTA.3=0;
            
            }
         
      }
}