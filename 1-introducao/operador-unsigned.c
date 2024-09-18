#include <stdio.h>
#include <stdlib.h>

/*
    Aula - Operador de unsigned
    trocar o %d por %u
    short int -> %d ou %hi
    unsigned short int %hu ou %d

*/

int main(){

    unsigned int x = 2147483647;
    //4 * 8 = 32 -> 31 -> 1 sinal

    unsigned short int y = 55000;

    printf("\n\n\t\t%u", ++x);
    printf("\n\n\t\t%hu", ++y);
    return 0;
}
