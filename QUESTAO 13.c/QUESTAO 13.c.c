#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int somaLinha, maiorSoma, linhaMaior;

    printf("Digite os elementos da matriz 3x3: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1); 
            scanf("%d", &matriz[i][j]);
        }
    }

    maiorSoma = -99999; 
    linhaMaior = 1; 

    for (i = 0; i < 3; i++) {
        somaLinha = 0;

        for (j = 0; j < 3; j++) {
            somaLinha += matriz[i][j];
        }

        printf("Soma da linha %d = %d ", i + 1, somaLinha);

        if (somaLinha > maiorSoma) {
            maiorSoma = somaLinha;
            linhaMaior = i + 1; 
        }
    }

    printf("A linha com a maior soma e a linha %d (soma = %d) ", linhaMaior, maiorSoma);

    return 0;
}
