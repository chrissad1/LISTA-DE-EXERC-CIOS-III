#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char string[50];
    int qtVogais = 0;
    int c, lente;

    printf("Digite uma frase: ");
    fgets(string, sizeof(string), stdin);

    lente = strlen(string);

    for (c = 0; c < lente; c++) {
        string[c] = tolower(string[c]);
        if (string[c] == 'a' || string[c] == 'e' || string[c] == 'i' ||  string[c] == 'o' || string[c] == 'u') {
            qtVogais += 1;
        }
    }

    printf("Nessa frase existe(m) %d vogal(is).\n", qtVogais);

    return 0;
}
