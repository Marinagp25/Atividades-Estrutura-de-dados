/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tamanho = 50;
    int vetor[tamanho];
    int contador = 0;
  
    srand(time(NULL));

    printf("Gerando 50 números aleatórios:\n");

    while (contador < tamanho) {
        int numero = rand() % 100; 
        printf("Número gerado: %d\n", numero);

        vetor[tamanho - contador - 1] = numero;
        contador++;

        if (contador == tamanho) {
            break; 
        }
    }

    printf("Vetor resultante:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}*/
