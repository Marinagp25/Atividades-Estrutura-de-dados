/*#include <stdio.h>

int main() {
    int tamanho = 10;
    int vetor[tamanho];
    int contador = 0;

    printf("Digite 10 números diferentes:\n");

    while (contador < tamanho) {
        int numero;
        int repetido = 0;

        printf("Digite o %do número: ", contador + 1);
        scanf("%d", &numero);

        for (int i = 0; i < contador; i++) {
            if (vetor[i] == numero) {
                printf("Este número já foi digitado. Tente novamente.\n");
                repetido = 1;
                break;
            }
        }

        if (!repetido) {
            vetor[contador] = numero;
            contador++;
        }
    }

    printf("Vetor resultante:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}*/
