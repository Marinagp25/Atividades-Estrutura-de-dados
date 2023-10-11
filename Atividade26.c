/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[5][5];
    int i, j;
    int somaLinha4 = 0;
    int somaColuna2 = 0;
    int somaDiagonalPrincipal = 0;

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            matriz[i][j] = rand() % 100; 
        }
    }

    // Exibe a matriz
    printf("Matriz:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Calcula a soma dos elementos da linha 4
    for (j = 0; j < 5; j++) {
        somaLinha4 += matriz[3][j];
    }

    // Calcula a soma dos elementos da coluna 2
    for (i = 0; i < 5; i++) {
        somaColuna2 += matriz[i][1];
    }

    // Calcula a soma dos elementos da diagonal principal
    for (i = 0; i < 5; i++) {
        somaDiagonalPrincipal += matriz[i][i];
    }

    printf("Soma dos elementos da linha 4: %d\n", somaLinha4);
    printf("Soma dos elementos da coluna 2: %d\n", somaColuna2);
    printf("Soma dos elementos da diagonal principal: %d\n", somaDiagonalPrincipal);

    return 0;
}*/
