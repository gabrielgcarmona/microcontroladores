1. Quais as diferenças entre os barramentos de dados e de endereços?

O barramento de endereço só possui uma direção enquanto o de dados possui as duas direções para leitura e escrita.

2. Quais são as diferenças entre as memórias RAM e ROM?

A memória RAM(Random Access Memory) é uma memoria volátil que possibilita a leitura e escrita em ordem aleatória além de ser mais rápida que a ROM, enquanto a ROM (Read Only Memory) é uma memória permanente que não é modificada pelo programa  utilizada para gravar esse programa.

3. Considere o código abaixo:

```C
#include <stdio.h>
int main(void)
{
	int i;
	printf("Insira um número inteiro: ");
	scanf("%d", &i);
	if(i%2)
		printf("%d eh impar.\n");
	else
		printf("%d eh par.\n");
	return 0;
}
```

Para este código, responda: (a) A variável `i` é armazenada na memória RAM ou ROM? Por quê? (b) O programa compilado a partir deste código é armazenado na memória RAM ou ROM? Por quê?

(a) A variável i é armazenada em RAM, pois ela pode ser lida e escrita com alta velocidade.
(b) ROM, pois ele não será modificado durante a execução e também deve permanecer após um reboot do sistema ou queda de energia.

4. Quais são as diferenças, vantagens e desvantagens das arquiteturas Harvard e Von Neumann?

	A arquitetura Harvard pode acessar a memória de dados e de programa simultaneamente, otimizando o tempo de execução, enquanto a arquitetura Von Neumann possui as duas memórias juntas, barateando e simplificando o sistema.

5. Considere a variável inteira `i`, armazenando o valor `0x8051ABCD`. Se `i` é armazenada na memória a partir do endereço `0x0200`, como ficam este byte e os seguintes, considerando que a memória é: (a) Little-endian; (b) Big-endian.

| 0x200 | L-E | B-E |
|-------|-----|-----|
| 0x202 | CD  | 80  |
| 0x204 | AB  | 51  |
| 0x206 | 51  | AB  |
| 0x208 | 80  | CD  |

6. Sabendo que o processador do MSP430 tem registradores de 16 bits, como ele soma duas variáveis de 32 bits?

 Utilizando quatro registradores dois para o primeiro e dois para o segundo, somamos os registradores com os bits menos significantes dos dois números e usando o carry dessa operação somamos os dois registradores com bits mais significantes, a concatenação dos dois registradores de resultado é o numero somado.
