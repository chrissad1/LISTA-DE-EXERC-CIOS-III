#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeros[50];
    int unicos[50];
    int i, j, k = 0;
    int repetido;
    srand(time(NULL));

    for (i = 0; i < 50; i++) {
        numeros[i] = rand() % 11; 
    }
    
    printf("Vetor original: ");
    for (i = 0; i < 50; i++) {
        printf("%d ", numeros[i]);
    }

    for (i = 0; i < 50; i++) {
        repetido = 0;
        for (j = 0; j < k; j++) {
            if (numeros[i] == unicos[j]) {
                repetido = 1;
                break;
            }
        }

        if (repetido == 0) {
            unicos[k] = numeros[i];
            k++;
        }
    }

    printf("nVetor com numeros unicos: ");
    for (i = 0; i < k; i++) {
        printf("%d ", unicos[i]);
    }

    return 0;
}
