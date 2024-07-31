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
	scanf("%d%f%f %c", &idade, &peso, &altura, &sexo); // deixando um espaco, é descosiderado um enter, espaco ou tab
	
	// Existe o buffer do teclado apos pular uma linha com o \n
	
	printf("Sexo: %c\nIdade: %d\nPeso: %.1f\nAltura: %.2f\n", sexo, idade, peso, altura);
	
	return 0;
}

