#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O numero e POSITIVO. ");
    } 
    else if (numero < 0) {
        printf("O numero e NEGATIVO. ");
    } 
    else {
        printf("O numero e ZERO. ");
    }

    return 0;
}

