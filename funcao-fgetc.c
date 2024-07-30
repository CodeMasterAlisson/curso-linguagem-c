#include <stdio.h>
#include <stdlib.h>

int main()
{
	// fge: a letra é f é de file-> arquivo
	char letra;
	
	printf("Digite uma letra: ");
	letra = fgetc(stdin); // recebe um parametro: stdin-> entrada padrao do sistema
	
	printf("Letra lida: %c\n", letra);
	
	return 0;
}

