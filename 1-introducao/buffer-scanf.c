#include <stdio.h>
#include <stdlib.h>

/*
	 ler sexo, idade, peso e altura
*/
int main()
{
	
	char a, b;
	
	printf("Digite uma letra: ");
	scanf("%c", &a);
	
	//scanf() => alternativa para limpar o buffer de teclado
	
	printf("Digite outra letra: ");
	scanf(" %c", &b); // um espaco para corrigir o buffer de teclado
	
	printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);
	
	return 0;
}

