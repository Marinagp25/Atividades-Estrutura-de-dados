/*#include <stdio.h>
#define NUM_FACES 6
typedef struct {
    int resultados[NUM_FACES];
} Dado;

void inicializarDado(Dado *dado) {
    for (int i = 0; i < NUM_FACES; i++) {
        dado->resultados[i] = 0;
    }
}

void lancarDado(Dado *dado, int resultado) {
    if (resultado >= 1 && resultado <= NUM_FACES) {
        dado->resultados[resultado - 1]++;
    }
}

void exibirFrequencia(const Dado *dado) {
    int totalLancamentos = 0;

    for (int i = 0; i < NUM_FACES; i++) {
        printf("Face %d ocorreu %d vezes.\n", i + 1, dado->resultados[i]);
        totalLancamentos += dado->resultados[i];
    }

    printf("Total de lançamentos: %d\n", totalLancamentos);
}

int main() {
    int n;  // Número de lançamentos
    printf("Quantas vezes você lançou o dado? ");
    scanf("%d", &n);

    Dado dado;
    inicializarDado(&dado);

    printf("Insira os resultados dos lançamentos separados por espaços:\n");

    for (int i = 0; i < n; i++) {
        int resultado;
        scanf("%d", &resultado);
        lancarDado(&dado, resultado);
    }

    exibirFrequencia(&dado);
    return 0;
}*/
