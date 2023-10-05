#include <stdio.h>

#define ALUNOS 15

int main() {
    float notas[ALUNOS];
    float soma = 0;
    float media;

    printf("Digite as notas dos %d alunos:\n", ALUNOS);

    // lê as notas dos alunos e realiza a soma
    for (int i = 0; i < ALUNOS; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // calcula a média geral
    media = soma / ALUNOS;

    printf("Média geral: %.2f\n", media);

    return 0;
}