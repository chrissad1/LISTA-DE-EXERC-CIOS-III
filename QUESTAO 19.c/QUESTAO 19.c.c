#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, contador = 0;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);  

    for (i = 0; i < strlen(palavra); i++) {
        if (palavra[i] == 'a' || palavra[i] == 'A') {
            contador++;
        }
    }

    printf("A palavra digitada contem %d letra(s) 'a'. ", contador);

    return 0;
}
