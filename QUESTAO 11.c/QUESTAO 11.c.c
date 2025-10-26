#include <stdio.h>

int main() {
    int numeros[10];
    int i, j;
    int contador;

    printf("Digite 10 numeros (entre 0 e 100,): ");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("Quantidade de vezes que cada numero apareceu: ");

    for (i = 0; i < 10; i++) {
        contador = 0;

        for (j = 0; j < 10; j++) {
            if (numeros[i] == numeros[j]) {
                contador++;
            }
        }

        int repetido = 0;
        for (j = 0; j < i; j++) {
            if (numeros[i] == numeros[j]) {
                repetido = 1;
                break;
            }
        }

        if (!repetido) {
            printf("O numero %d apareceu %d vez(es)", numeros[i], contador);
        }
    }

    return 0;
}
