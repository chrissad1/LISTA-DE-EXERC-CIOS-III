#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, tamanho;
    int palindromo = 1; 

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    for (i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo)
        printf("A palavra '%s' e um PALINDROMO. ", palavra);
    else
        printf("A palavra '%s' NAO e um palindromo. ", palavra);

    return 0;
}
