#include <stdio.h>
#include <stdlib.h>

/*
    Aula - Operador de incremento
    pos-incremento = variavel++
    pre-incremento = ++variavel

    Operador de decremento -> variavel-- ou --variavel
*/

int main(){

    int contador = 10;
    //sin�nimos
    //contador++;
    //contador += 1
    //contador = contador + 1

    int resultado = contador++;
    printf("\nValor: %d\n", resultado);
    resultado = contador;
    printf("\nValor: %d\n", resultado);
    --contador;
    resultado = contador;
    printf("\nValor: %d\n", resultado);
    return 0;
}
