
#include <msp430.h>

/*Usando MSP430FR2433*/

#define LED1 BIT0
#define LED2 BIT1
#define BTN BIT7

#define CICLOS 32768


void main(void)
{
    void delay(long int* contador,long int* aux);
    long int aux = 0;


	WDTCTL = WDTPW | WDTHOLD;	// desabilita watchdog timer
	PM5CTL0 &= ~LOCKLPM5;    // desabilita alta impedância
	P1DIR = LED1 + LED2;
	P1OUT = ~(LED1 + LED2);

	P2DIR = 0;
	    while(1){
	        if(!(P2IN & BTN)){
	            for(aux=0;aux < 3; aux++){
                    P1OUT = ~(LED1 + LED2);
                    for(aux=0;aux < CICLOS;aux++);
                    P1OUT = LED1 + LED2;
                    for(aux=0;aux < CICLOS;aux++);
	            }
	        }
	        P1OUT = ~(LED1 + LED2);
	    }
}