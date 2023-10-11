/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[8][8];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            matriz[i][j] = rand() % 100; 
        }
    }

    // Exibe a matriz original
    printf("Matriz original:\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 8; j++) {
            matriz[i][j] = 0; 
        }
    }

    printf("Matriz triangular inferior:\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/
