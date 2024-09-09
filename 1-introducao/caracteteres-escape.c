/*
 * caracteteres-escape.c
 * 
 */

/*
 * caracteres de escape
 * Quebra de linha -> \n
 * Tabulação       -> \t
 * Aspas duplas    -> \"
 * Aspas simples   -> \'
 * Contrabarra     -> \\
 * */
#include <stdio.h>

int main(int argc, char **argv)
{
	printf("\n\nIsto e uma mensagem a ser impressa na tela\n\n");
	printf("\t\"Menu\"");
	return 0;
}

