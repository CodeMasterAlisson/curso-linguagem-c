#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma
    variável auxiliar.
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
