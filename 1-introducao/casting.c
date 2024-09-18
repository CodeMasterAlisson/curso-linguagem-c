#include <stdio.h>
#include <stdlib.h>

/*
    Aula - Conversão de tipos - casting
*/

int main(){

    int a = 10, b = 20;
    float pi = 3.1415;
    a = (int)pi;

    printf("\nValor de a: %d\n", a);
    printf("Soma: %d\n", a + b);
    printf("Subtracao: %d\n", a - b);
    printf("Multiplicacao: %d\n", a * b);
    printf("Divisao: %f\n", (float)a / b);

    return 0;
}
