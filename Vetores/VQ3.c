#include <stdio.h>
#include <math.h>

#define TAMANHO 10

int main() {
    float conjunto[TAMANHO];
    float quadrados[TAMANHO];

    printf("Digite um conjunto de 10 números reais:\n");

    // valores do conjunto
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%f", &conjunto[i]);
    }

    // quadrado das componentes do vetor
    for (int i = 0; i < TAMANHO; i++) {
        quadrados[i] = pow(conjunto[i], 2);
    }

    printf("Conjunto original:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%.2f ", conjunto[i]);
    }
    printf("\n");

    printf("Quadrados das componentes:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%.2f ", quadrados[i]);
    }
    printf("\n");

    return 0;
}