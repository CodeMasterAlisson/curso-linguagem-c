#include <stdio.h>
#include <stdlib.h>

/*
    Uma empresa contrata um encanador a R$ 45,00 por dia. Fa�a um programa que solicite o
    n�mero de dias trabalhados pelo encanador e imprima a quantia l�quida que dever� ser paga,
    sabendo que s�o descontados 8% para imposto de renda.
*/

int main(){

    float dias, valorFinal, desconto;

    printf("Quantos dias trabalhados? ");
    scanf("%f", &dias);

    valorFinal = dias * 45;
    desconto = valorFinal * 0.08;
    valorFinal -= desconto;

    printf("\nA receber: R$ %.2f\nDesconto R$ %.2f\n", valorFinal, desconto);

    return 0;
}
