#include <msp430.h>

/*Usando MSP430FR2433*/

#define LED1 BIT0
#define LED2 BIT1
#define CICLOS 32768


void main(void)
{
    
    long int aux = 0;


	WDTCTL = WDTPW | WDTHOLD;	// desabilita watchdog timer
	PM5CTL0 &= ~LOCKLPM5;    // desabilita alta impedância
	P1DIR = LED1 + LED2;
	P1OUT = ~(LED1 + LED2);
	    while(1){
	        P1OUT = ~(LED1 + LED2);
	        for(aux=0;aux < CICLOS;aux++);
	        P1OUT = LED1 + LED2;
	        for(aux=0;aux < CICLOS;aux++);

	    }
}