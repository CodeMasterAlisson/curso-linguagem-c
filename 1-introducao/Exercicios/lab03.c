#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
    porcentagem) e o n�mero de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
    Assuma que a conta ser� dividida igualmente.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");

    int numPessoas;
    float valorDespesa, gorjeta, valorTotal, valorPorPessoa;

    printf("Digite o valor da conta, da gorjeta e a quantidade de pessoas: ");
    scanf("%f%f%d", &valorDespesa, &gorjeta, &numPessoas);
    valorTotal = valorDespesa * gorjeta/100 + valorDespesa;
    valorPorPessoa = valorTotal / numPessoas;


    printf("Cada um ira pagar R$%.2f\n ", valorPorPessoa);

    return 0;
}
