#include <msp430g2553.h>

#define LED1 BIT0
#define LED2 BIT6
void main(void){
	
	
	WDTCTL = WDTPW | WDTHOLD;
	P1DIR = LED1 + LED2;
	P1OUT = ~(LED1 + LED2);
	while(1){
		P1OUT = ~(LED1 + LED2);
		delay(2000);
		P1OUT = LED1 + LED2;
		delay(2000);		
	}
	


}
void delay(int tempo){
	int tempo = 0;
	while(tempo < tempo){
			tempo++;
	}
}