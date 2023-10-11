/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[5][6];
    int i, j;
    int somaPares = 0;
    int totalPares = 0;
    float mediaPares;

    srand(time(NULL));

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            matriz[i][j] = rand() % 100; 
        }
    }

    printf("Matriz original:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            printf("%3d ", matriz[i][j]);
            if (matriz[i][j] % 2 == 0) {
                somaPares += matriz[i][j];
                totalPares++;
            }
        }
        printf("\n");
    }

    if (totalPares > 0) {
        mediaPares = (float)somaPares / totalPares;
        printf("Média dos valores pares: %.2f\n", mediaPares);
    } else {
        printf("Nenhum valor par encontrado na matriz.\n");
    }

    return 0;
}*/
