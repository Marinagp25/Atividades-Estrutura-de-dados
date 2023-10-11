/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[6][6];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            matriz[i][j] = rand() % 101 - 50; 
        }
    }

    printf("Matriz original:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (i != j && matriz[i][j] < 0) {
                matriz[i][j] = 0;
            }
        }
    }

    printf("Matriz com valores negativos fora da diagonal principal substituídos por 0:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/
