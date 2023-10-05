#include <stdio.h>

#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int maior = 0;
    int posicaoMaior = 0;

    printf("Digite 10 números inteiros:\n");

    // valores do vetor
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
    }

    // maior elemento e sua posição
    for (int i = 0; i < TAMANHO; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicaoMaior = i;
        }
    }

    printf("Vetor: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Maior elemento: %d\n", maior);
    printf("Posição do maior elemento: %d\n", posicaoMaior);

    return 0;
}