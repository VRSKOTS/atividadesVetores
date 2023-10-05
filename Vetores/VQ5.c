#include <stdio.h>

#define TAMANHO 10

int main() {
    int vetor[TAMANHO];
    int countPares = 0;

    printf("Digite um vetor de 10 números:\n");

    // valores do vetor
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);
    }

    // valores pares no vetor
    for (int i = 0; i < TAMANHO; i++) {
        if (vetor[i] % 2 == 0) {
            countPares++;
        }
    }

    printf("O vetor possui %d valores pares\n", countPares);

    return 0;
}