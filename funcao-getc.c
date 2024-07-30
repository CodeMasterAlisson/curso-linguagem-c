#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	char letra;
	
	printf("Digite uma letra: ");
	letra = getc(stdin); // recebe um parametro: stdin-> entrada padrao do sistema
	
	printf("Letra lida: %c\n", letra);
	
	return 0;
}

