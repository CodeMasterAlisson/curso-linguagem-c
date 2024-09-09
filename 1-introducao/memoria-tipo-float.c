/*
 * memoria-tipo-float.c
 * 
 */


#include <stdio.h>

int main(int argc, char **argv)
{
	float x = 3.1415;
	printf("Um float precisa de %d bystes de memoria.\n", sizeof(float));
	printf("Um float precisa de %d bystes de memoria.\n", sizeof x);
	
	return 0;
}

