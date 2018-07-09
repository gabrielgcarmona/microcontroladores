Para todas as questões, considere que as variáveis `f`, `g`, `h`, `i` e `j` são do tipo inteiro (16 bits na arquitetura do MSP430), e que o vetor `A[]` é do tipo inteiro. Estas variáveis estão armazenadas nos seguintes registradores:

- f: R4
- g: R5
- h: R6
- i: R7
- j: R8
- A: R9

Utilize os registradores R11, R12, R13, R14 e R15 para armazenar valores temporários.

1. Traduza as seguintes linhas em C para a linguagem assembly do MSP430. Utilize somente as seguintes instruções: mov.w, add.w e sub.w.

(a) `f = 0;`
	mov.w #0, R4
	
(b) `g++;`

	mov.w R5, R11
	add.w  R5, R5, R11
	
(c) `h--;`
	mov.w #1, R12
	sub.w R6,R6,R12
(d) `i += 2;`
	mov.w #2, R11
	add.w R7, R7, R11
(e) `j -= 2;`
	mov.w #2, R11
	sub.w R8, R8, R11

2. Traduza as seguintes linhas em C para a linguagem assembly do MSP430. Utilize somente as seguintes instruções: mov.w, add.w, sub.w, clr.w, dec.w, decd.w, inc.w e incd.w.

(a) `f = 0;`
	clr.w R4
(b) `g++;`
	inc.w R5
(c) `h--;`
	dec.w R6
(d) `i += 2;`
	incd.w R7
(e) `j -= 2;`
	decd.w R8
3. Traduza as seguintes linhas em C para a linguagem assembly do MSP430. Utilize somente as seguintes instruções: mov.w, add.w, sub.w, clr.w, dec.w, decd.w, inc.w e incd.w.

(a) `f *= 2;`
	add.w R4, R4, R4

(b) `g *= 3;`
	mov.w R5, R11
	add.w R5, R5, R11
	add.w R5, R5, R11
	
(c) `h *= 4;`
	mov.w R6, R11
	add.w R6, R6, R11
	add.w R6, R6, R11
	add.w R6, R6, R11

(d) `A[2] = A[1] + A[0];`

	add.w 2(R9), 1(R9), 0(R9)
	
(e) `A[3] = 2*f - 4*h;`
	add.w R11, R4, R4	
	add.w R12, R6, R6
	add.w R12, R12, R6
	add.w R12, R12, R6
	sub.w 3(R9), R11, R12
(f) `A[3] = 2*(f - 2*h);`
	add.w R11, R6, R6
	sub.w R12, R4, R11
	add.w 3(R9), R12, R12
	
