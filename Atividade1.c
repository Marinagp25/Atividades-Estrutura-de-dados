/*#include <stdio.h>
#include <string.h>

int calcular(const char resposta[], const char respostasAluno[]) {
  int pontos = 0;

  for (int i = 0; i < 10; i++) {
    if (resposta[i] == respostasAluno[i]) {
      pontos += 10;
    }
  }

  return pontos;
}

int main() {
  char resposta[11];
  char respostasAluno[11];

  printf(
      "Digite o gabarito da prova (10 letras A, B, C, D ou E, sem espaços): ");
  scanf("%s", resposta);

  printf("Digite as respostas do aluno (10 letras A, B, C, D ou E, sem "
         "espaços): ");
  scanf("%s", respostasAluno);

  int pontos = calcular(resposta, respostasAluno);

  printf("Pontuação do aluno: %d\n", pontos);

  return 0;
}*/