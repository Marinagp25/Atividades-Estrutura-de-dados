/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[8][8];
    int i, j;
    int maiorDiagonalPrincipal;
    int somaDiagonalSecundaria = 0;

    srand(time(NULL));

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            matriz[i][j] = rand() % 100; 
        }
    }

    // Exibe a matriz
    printf("Matriz:\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    maiorDiagonalPrincipal = matriz[0][0];
    for (i = 0; i < 8; i++) {
        if (matriz[i][i] > maiorDiagonalPrincipal) {
            maiorDiagonalPrincipal = matriz[i][i];
        }
    }

    for (i = 0; i < 8; i++) {
        somaDiagonalSecundaria += matriz[i][7 - i];
    }

    printf("Maior elemento da diagonal principal: %d\n", maiorDiagonalPrincipal);
    printf("Soma dos elementos da diagonal secundária: %d\n", somaDiagonalSecundaria);

    return 0;
}*/
