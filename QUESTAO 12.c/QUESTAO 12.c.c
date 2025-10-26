#include <stdio.h>

int main() {
    int v1[5], v2[5];
    int i;
    int resultado = 0;

    printf("Digite 5 numeros para o primeiro vetor: ");
    for (i = 0; i < 5; i++) {
        printf("v1[%d]: ", i);
        scanf("%d", &v1[i]);
    }

    printf("Digite 5 numeros para o segundo vetor: ");
    for (i = 0; i < 5; i++) {
        printf("v2[%d]: ", i);
        scanf("%d", &v2[i]);
    }

    for (i = 0; i < 5; i++) {
        resultado = resultado + (v1[i] * v2[i]);
    }

    printf("O produto escalar entre os dois vetores e: %d", resultado);

    return 0;
}
