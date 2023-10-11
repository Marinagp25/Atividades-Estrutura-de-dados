/*#include <stdio.h>

int main() {
    int tamanho_inteiros = 10;
    int vetor_inteiros[tamanho_inteiros];
    float vetor_reais[15];
    float vetor_combinado[25];

    printf("Digite os 10 valores inteiros:\n");
    for (int i = 0; i < tamanho_inteiros; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor_inteiros[i]);
    }

    printf("Digite os 15 valores reais:\n");
    for (int i = 0; i < 15; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%f", &vetor_reais[i]);
    }

    for (int i = 0; i < 15; i++) {
        vetor_combinado[i] = vetor_reais[i];
    }

    for (int i = 0; i < tamanho_inteiros; i++) {
        vetor_combinado[i + 15] = vetor_inteiros[i];
    }

    printf("Terceiro vetor combinado:\n");
    for (int i = 0; i < 25; i++) {
        printf("%.2f ", vetor_combinado[i]);
    }

    return 0;
}*/
