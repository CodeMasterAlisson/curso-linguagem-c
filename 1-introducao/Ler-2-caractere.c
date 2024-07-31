#include <stdio.h>
#include <stdlib.h>

/*
	 ler sexo, idade, peso e altura
*/
int main()
{
	
	char a, b;
	
	printf("Digite duas letras: ");
	scanf("%c %c", &a, &b); // o espaço desconsidera o enter, tab e espaço
	
	// buffer de teclado => h\nj\n
	// a = h 
	// buffer = \n
	// b = \n
	// fim de programa
	
	printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);
	
	//existe o fflush() para limpar o buffer de teclado, mas serve apenas para o windows
	// e nao e garantia que funcione para todos os casos
	
	return 0;
}

