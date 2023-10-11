/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[10][10];
    int menor_valor = 1000;
    int linha_menor, coluna_menor;

    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = rand() % 100;

            if (matriz[i][j] < menor_valor) {
                menor_valor = matriz[i][j];
                linha_menor = i;
                coluna_menor = j;
            }
        }
    }

    printf("Matriz 10x10 com números aleatórios:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("O menor valor é %d e está na linha %d, coluna %d.\n", menor_valor, linha_menor, coluna_menor);

    return 0;
}
*/