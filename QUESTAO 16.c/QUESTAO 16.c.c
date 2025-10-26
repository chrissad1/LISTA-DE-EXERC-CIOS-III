#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int somaLinha[3] = {0}, somaColuna[3] = {0};
    int somaDiagPrincipal = 0, somaDiagSecundaria = 0;
    int magico = 1;

    printf("Digite os elementos da matriz 3x3: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            somaLinha[i] += matriz[i][j];
            somaColuna[j] += matriz[i][j];
        }
        somaDiagPrincipal += matriz[i][i];
        somaDiagSecundaria += matriz[i][2 - i];
    }

    int somaReferencia = somaLinha[0];

    for (i = 0; i < 3; i++) {
        if (somaLinha[i] != somaReferencia || somaColuna[i] != somaReferencia) {
            magico = 0;
            break;
        }
    }

    if (somaDiagPrincipal != somaReferencia || somaDiagSecundaria != somaReferencia)
        magico = 0;


    if (magico)
        printf("A matriz e um QUADRADO MAGICO! ");
    else
        printf("A matriz NAO e um quadrado magico. ");

    return 0;
}
