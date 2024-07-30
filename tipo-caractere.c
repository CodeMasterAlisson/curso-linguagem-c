#include <stdio.h>

int main()
{
	
	char sexo = 's';
	
	printf("\nCaractere: %c\n", sexo);
	printf("\nDigite seu sexo (f, F, m ou M): ");
	scanf("%c", &sexo);
	printf("\nValor da variavel sexo: %c\n", sexo);
	
	return 0;
}

