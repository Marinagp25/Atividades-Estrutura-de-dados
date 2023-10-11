/*#include <stdio.h>

struct Pessoa {
    char nome[100];
    int idade;
    long long rg;
};

int main() {
    char string[100];
    struct Pessoa pessoa;

    printf("a) Digite uma string: ");
    gets(string);
    printf("O que foi digitado: %s\n\n", string);

    printf("b) Digite outra string: ");
    gets(string);
    printf("As 4 primeiras letras são: %.4s\n\n", string);

    printf("c) Digite o nome completo: ");
    gets(pessoa.nome);
    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);
    printf("Digite o RG: ");
    scanf("%lld", &pessoa.rg);

    while (getchar() != '\n');

    printf("\n*****************************************\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d anos\n", pessoa.idade);
    printf("RG: %lld\n", pessoa.rg);
    printf("*****************************************\n");

    return 0;
}*/
