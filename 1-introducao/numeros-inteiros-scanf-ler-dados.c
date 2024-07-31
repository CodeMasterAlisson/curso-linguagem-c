#include <stdio.h>

int main()
{
	
	int valor, valor2; // recebe um número inteiro: tipo inteiro
	valor = 10; // atribuição: recebe um valor
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &valor); // recebe uma mascara e um ponteiro: endereço de memoria
	printf("Digite outro valor inteiro: ");
	scanf("%d", &valor2);
	
	printf("\n\nPrimeiro valor: %d\nSegundo valor: %d\n\n", valor, valor2);
	
	return 0;
}

