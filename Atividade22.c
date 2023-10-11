/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][4];
    int matriz_resultante[4][4];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 100; 
        }
    }

    printf("Matriz original:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            matriz_resultante[i][j] = (i == 0) ? matriz[3][j] : (j == 3) ? matriz[i][0] : matriz[i][j];
        }
    }

    printf("Matriz resultante:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%3d ", matriz_resultante[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/
