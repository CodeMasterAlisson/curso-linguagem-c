#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Fa�a um programa em C para trocar o valor de duas vari�veis inteiras sem utilizar nenhuma
    vari�vel auxiliar.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");


    int a, b;

    printf("\nEntre com dois valores inteiros: \n");
    scanf("%d%d",&a,&b);

    printf("a: %d\tb: %d\n", a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a: %d\tb: %d\n", a,b);

    return 0;
}
