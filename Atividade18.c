/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[6][6];
    int contador = 0;

    srand(time(NULL));

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            matriz[i][j] = rand() % 21; 

            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }

    // Imprima a matriz
    printf("Matriz 6x6 com números aleatórios:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
  
    printf("A matriz possui %d valores maiores que 10.\n", contador);

    return 0;
}*/
