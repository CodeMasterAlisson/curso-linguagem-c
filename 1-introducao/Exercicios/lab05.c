#include <stdio.h>
#include <stdlib.h>

/*
    Conversor de real para dolar
*/

int main(){

    float valorReal, valorDolar;

    printf("Digite o valor em reais a ser convertido: ");
    scanf("%f", &valorReal);

    valorDolar = valorReal / 5.3;
    printf("\nValor em dolar $%.2f\n", valorDolar);

    return 0;
}
