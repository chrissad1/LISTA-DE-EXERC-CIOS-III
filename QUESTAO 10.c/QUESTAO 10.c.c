#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int maior;

    printf("Digite os valores da matriz 4x4: ");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Maior valor de cada linha: ");
    for (i = 0; i < 4; i++) {
        maior = matriz[i][0]; 
        for (j = 1; j < 4; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
        printf("Linha %d: %d", i, maior);
    }

    return 0;
}

