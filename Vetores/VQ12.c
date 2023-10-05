#include <stdio.h>

#define TAMANHO 5

int main() {
    int vetor[TAMANHO];
    int maior, menor, soma = 0;
    float media;

    printf("Digite 5 valores:\n");

    // lê os valores e encontra o maior e o menor
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);

        if (i == 0) {
            maior = vetor[i];
            menor = vetor[i];
        } else {
            if (vetor[i] > maior) {
                maior = vetor[i];
            }
            if (vetor[i] < menor) {
                menor = vetor[i];
            }
        }

        soma += vetor[i];
    }

    // calcula a média
    media = (float)soma / TAMANHO;

    printf("Valores lidos: ");

    // imprime os valores lidos
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nMaior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média: %.2f\n", media);

    return 0;
}