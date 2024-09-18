#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    tabela ascii e acentuacao
    1 byte -> 8 bits -> -128 ate 127
    unsigned 1 byte -> 0 ate 255

    9 � o caractere de tabulacao \t
    10 � o caracere de nova linha \n
    65 e a letra A maiuscula
    66 e a letra B maiuscula
    90 e a letra Z maiuscula

    1� setlocale(LC_ALL, NULL); // padrao linguagem c
    2� setlocale(LC_ALL, ""); // padrao sistema operacional
    3� setlocale(LC_ALL, "Portuguese"); portugues brasileiro
*/

int main(){

    setlocale(LC_ALL, "Portuguese");
    char letra = 'f';
    printf("%c", 102);
    printf("\nCora��o\n");

    printf("\n%s\n", setlocale(LC_ALL, "Portuguese"));

    return 0;
}
