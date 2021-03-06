Para as questões 2 a 5, considere que as variáveis `f`, `g`, `h`, `i` e `j` são do tipo inteiro (16 bits na arquitetura do MSP430), e que o vetor `A[]` é do tipo inteiro. Estas variáveis estão armazenadas nos seguintes registradores:
	f: R4
	g: R5
	h: R6
	i: R7
	j: R8
	A: R9
Utilize os registradores R11, R12, R13, R14 e R15 para armazenar valores temporários.

1. Escreva os trechos de código assembly do MSP430 para:
	(a) Somente setar o bit menos significativo de R5.
	```Assembly
		mov.w #1, R11
		bis R11,R5 
	```
	(b) Somente setar dois bits de R6: o menos significativo e o segundo menos significativo.
	```Assembly
		mov.w #3, R11
		bis R11, R6
	```
	(c) Somente zerar o terceiro bit menos significativo de R7.
	```Assembly
		mov.w #4, R11
		bic R11, R7
	```
	(d) Somente zerar o terceiro e o quarto bits menos significativo de R8.
	```Assembly
		mov.w #12, R11
		bic R11, R8
	```
	(e) Somente inverter o bit mais significativo de R9.
	```Assembly
		mov.w #0xF0, R11
		
	```
	
	(f) Inverter o nibble mais significativo de R10, e setar o nibble menos significativo de R10. 
	```Assembly
		mov.w #0xF0, R11
		xor.w R11, R10
		mov.w #0x0F, R11
		bis.w R11, R10
		
	```

2. "Traduza" o seguinte trecho de código em C para o assembly do MSP430:

```C
if(i>j) f = g+h+10;
else f = g-h-10;
```
```Assembly
	cmp R7, R6		
	jge else
	mov.w #10,R11
	mov.w R5, R4	
	add.w R6, R4 	
	add.w R11, R4
else:	mov.w R5, R4	
	sub.w R6, R4 	
	sub.w R11, R4
```

3. "Traduza" o seguinte trecho de código em C para o assembly do MSP430:

```C
while(save[i]!=k) i++;
```
```Assembly
	mov.w R15, R11
while: 	
	cmp 0(R11), R14		
	jz fim
	incd.w R11
	inc.w R7
	jmp while
fim:	
```
4. "Traduza" o seguinte trecho de código em C para o assembly do MSP430:

```C
for(i=0; i<100; i++) A[i] = i*2;
```
```Assembly
		mov.w #0, R7 
		mov.w R9, R15
		mov.w #100,R11
for:
		cmp R11,R7
		jge fim
		mov.w R7, R12
		add.w R12,R12
		mov.w R12, 0(R15) 
		incd.w R15
		inc.w R7
		jmp for
fim: 	
```

5. "Traduza" o seguinte trecho de código em C para o assembly do MSP430:

```C
for(i=99; i>=0; i--) A[i] = i*2;
```
```Assembly
		mov.w #99, R7 
		mov.w R9, R15
		add.w #198,R15
		mov.w #0,R11
for:
		cmp R11,R7
		jl fim
		mov.w R7, R12
		add.w R12,R12
		mov.w R12, 0(R15) 
		decd.w R15
		dec.w R7
		jmp for
fim: 	
```
