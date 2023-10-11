/*#include <stdio.h>

int main() {
    char string[100];
    int i = 0, length = 0, vowel_count = 0;

    // a) Sem usar a função strlen(), leia uma string e imprima quantos caracteres ela possui.
    printf("a) Digite uma string: ");
    gets(string);

    while (string[i] != '\0') {
        length++;
        i++;
    }
    printf("A string tem %d caracteres.\n\n", length);

    // b) Leia uma string e imprima de trás para a frente.
    printf("b) A string de trás para a frente: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", string[i]);
    }
    printf("\n\n");

    // c) Leia uma string do teclado e conte quantas vogais ela possui.
    for (i = 0; i < length; i++) {
        char ch = tolower(string[i]); // Converter o caractere para minúsculas para verificar vogais
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowel_count++;
        }
    }
    printf("c) A string possui %d vogais.\n", vowel_count);

    return 0;
}*/
