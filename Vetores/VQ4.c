#include <stdio.h>

#define TAMANHO 8

int main() {
    int vetor[TAMANHO];
    int posicaoA, posicaoF;
    int soma;

    printf("Digite um vetor de 8 números:\n");

    // valores do vetor
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite duas posições (A' e F) entre 0 e 7:\n");
    scanf("%d %d", &posicaoA, &posicaoF);

    // soma dos valores nas posições A' e F
    soma = vetor[posicaoA] + vetor[posicaoF];

    printf("A soma dos valores nas posições A' e F é: %d\n", soma);

    return 0;
}