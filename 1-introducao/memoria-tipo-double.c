/*
 * memoria-tipo-double.c
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	float x = 3.1415; // precisão simples
	long double y = 3.14155896587458962548; // precisão dupla, há mais precisão
	
	printf("Um double precisa de %d bystes de memoria.\n", sizeof y);
	printf("Valor de y: %.10Lf\n", y); // L maiusculo para nao zerar 
	
	// __mingw_printf("Valor de y: %.10Lf\n", y); para windows
	return 0;
}

