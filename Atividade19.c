/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][4];

    srand(time(NULL));

    printf("Matriz original (números gerados):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = rand() % 10 + 1; 
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] *= 2;
        }
    }

    printf("\nMatriz resultante (todos os elementos multiplicados por 2):\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}*/
