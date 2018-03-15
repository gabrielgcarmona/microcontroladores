1. Dada uma variável `a` do tipo `char` (um byte), escreva os trechos de código em C para:
	(a) Somente setar o bit menos significativo de `a`.
		a |= 0x01;
	(b) Somente setar dois bits de `a`: o menos significativo e o segundo menos significativo.
		a |= 0x03;
	(c) Somente zerar o terceiro bit menos significativo de `a`.
		a &= ~0xFB;
	(d) Somente zerar o terceiro e o quarto bits menos significativo de `a`.
		a &= ~(BIT3 + BIT4);
	(e) Somente inverter o bit mais significativo de `a`.
		a ^= BIT7;
	(f) Inverter o nibble mais significativo de `a`, e setar o nibble menos significativo de `a`. 
		a ^= 0xF0;
		a |= 0x0F;

2. Considerando a placa Launchpad do MSP430, escreva o código em C para piscar os dois LEDs ininterruptamente.
	aula3_2.c
3. Considerando a placa Launchpad do MSP430, escreva o código em C para piscar duas vezes os dois LEDs sempre que o usuário pressionar o botão.
	aula3_3.c
4. Considerando a placa Launchpad do MSP430, faça uma função em C que pisca os dois LEDs uma vez.

	#define CICLOS 32768
	void pisca(){
		P1OUT = LED1 + LED2;
		for(aux=0;aux < CICLOS;aux++);
		P1OUT = ~(LED1 + LED2);
		for(aux=0;aux < CICLOS;aux++);
	}
	
5. Reescreva o código da questão 2 usando a função da questão 4.
	aula3_5.c

6. Reescreva o código da questão 3 usando a função da questão 4.
	aula3_6.c