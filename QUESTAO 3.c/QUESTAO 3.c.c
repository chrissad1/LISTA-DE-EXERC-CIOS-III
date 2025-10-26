#include <stdio.h>

int main() {
    int n, i;
    int numeros[100];
    int somaPares = 0;
    int somaImpares = 0;

    printf("Quantos numeros voce quer digitar? ");
    scanf("%d", &n);

    printf("\nDigite os %d numeros:\n", n);

    for (i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nos numeros digitados foram:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }

    for (i = 0; i < n; i++) {
        if (numeros[i] % 2 == 0) {
            somaPares = somaPares + numeros[i];
        } else {
            somaImpares = somaImpares + numeros[i];
        }
    }

    printf("\n\nSoma dos numeros pares: %d", somaPares);
    printf("\nSoma dos numeros impares: %d\n", somaImpares);

    return 0;
}
