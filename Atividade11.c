/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[40];
  
    srand(time(0));

    printf("Números aleatórios gerados:\n");
    for (int i = 0; i < 40; i++) {
        vetor[i] = rand() % 201 - 100; 
        printf("%d ", vetor[i]);
    }
    printf("\n");

    for (int i = 0; i < 40; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    printf("Vetor resultante:\n");
    for (int i = 0; i < 40; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}*/
