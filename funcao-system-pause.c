#include <stdio.h>

int main()
{
	
	//\n serve para pular de linha
	printf("Olá, seja bem vindo!!\n");
	printf("\n---------------------------------\n\n");
	printf("1 - Logar	2 - Cadastrar	3 - Imprimir\n");
	printf("\n---------------------------------\n\n");
	
	printf("\nValor retornado: %d", printf("Oi"));
	//system("pause"); nao funciona no linux ou mac
	
	//alternativa
	printf("\nPressione qualquer tecla para finalizar.");
	getchar(); // espera um caractere
	return 0;
}

