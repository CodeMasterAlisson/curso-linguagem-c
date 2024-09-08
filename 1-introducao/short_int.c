#include <stdio.h>

int main()
{
	
	
	//short intervalo de -32.768 ate 32.767
	
	float x = 1.0;
	short int si = 32767;
	
	printf("Tamanho em memoria de float: %d bytes\n", sizeof x);
	printf("Tamanho em memoria de int: %d bytes\n", sizeof(int));
	printf("Tamanho em memoria de double: %d bytes\n", sizeof(double));
	printf("Tamanho em memoria de short int: %hi bytes\n", sizeof si);
	
	// 4 bytes em memória e cada byte tem 8 bits, então um inteiro tem 32bits de endereçamento
	// short int ocupa a metade do int, ou seja, 16bits de endereçamento 
	
	int y = 0;
	short int xx = 32767;
	printf("Valor de x: %d\n", xx);
	xx++;
	printf("Valor de x: %hi\n", xx); // estouro de memória
	return 0;
}

