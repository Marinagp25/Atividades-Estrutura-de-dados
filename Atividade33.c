/*#include <stdio.h>

int contaCaractereNaString(const char *string, char caractere) {
    int contador = 0;
    int i = 0;

    while (string[i] != '\0') {
        if (string[i] == caractere) {
            contador++;
        }
        i++;
    }

    return contador;
}

int main() {
    char string[100];
    char caractere;

    printf("Digite uma string: ");
    gets(string); 

    printf("Digite um caractere: ");
    scanf(" %c", &caractere); 

    int resultado = contaCaractereNaString(string, caractere);

    printf("O caractere '%c' aparece %d vezes na string.\n", caractere, resultado);

    return 0;
}*/
