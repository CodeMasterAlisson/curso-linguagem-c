#include <stdio.h>

int main()
{
	
	// tipo float
	float numero = 3.1415;
	
	
	// por padrao imprime com 6 casas apos a virgula
	printf("Valor da minha variavel: %.2f\n", numero);
	
	printf("Digite um numero real: ");
	scanf("%f", &numero);
	printf("Valor da minha variavel: %.2f\n", numero);
	
	return 0;
}

