#include <stdio.h>
#include <stdlib.h>

/*
	 ler sexo, idade, peso e altura
*/
int main()
{
	
	char sexo;
	int idade;
	float peso, altura;
	
	printf("Digite idade, peso e altura, sexo (f, F, m ou M):\n");
	scanf("%d%d%f%c", &idade, &idade, &peso, &sexo);
	
	printf("Sexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %.2f\n", sexo, idade, peso, altura);
	
	return 0;
}

