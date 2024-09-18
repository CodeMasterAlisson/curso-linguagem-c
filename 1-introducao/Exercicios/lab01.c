#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um
    para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável
    “a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente
    estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.
*/

int main(){

    setlocale(LC_ALL, "Portuguese");


    int a, b, aux;

    printf("\nEntre com dois valores inteiros: \n");
    scanf("%d%d",&a,&b);

    printf("\nValor de a: %d\n", a);
    printf("\nValor de b: %d\n", b);

    aux = a;
    a = b;
    b = aux;

    printf("\nTrocando valores\n");
    printf("\nValor de a: %d\n", a);
    printf("\nValor de b: %d\n", b);

    return 0;
}
