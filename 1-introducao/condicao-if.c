#include <stdio.h>
#include <stdlib.h>

/*
    Decisão Simples
*/

int main(){

    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    if(a < 0){
        printf("\nValor negativo!\n");
    }
    printf("\nContinuando o programa...\n");
    return 0;
}