/*
 * operador-long-int.c
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	long int x = 2147483647;
	
	printf("Tamanho de x em bystes: %d\n", sizeof x);
	x++;
	printf("Valor de x: %li\n", x);
	
	return 0;
}

