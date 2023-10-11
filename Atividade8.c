/*#include <stdio.h>
#include <stdbool.h>

int main() {
    for (int i = 0; i < 3; i++) {
        int numero, copia, reverso = 0;

        printf("Digite um número de 6 algarismos: ");
        scanf("%d", &numero);

        if (numero < 100000 || numero > 999999) {
            printf("Número inválido. Deve ter 6 algarismos.\n");
            continue; // Reinicia o loop
        }

        copia = numero;

        for (int j = 0; j < 6; j++) {
            reverso = reverso * 10 + copia % 10;
            copia /= 10;
        }

        if (reverso == numero) {
            printf("O número %d é um palíndromo.\n", numero);
        } else {
            printf("O número %d não é um palíndromo.\n", numero);
        }
    }

    return 0;
}*/
