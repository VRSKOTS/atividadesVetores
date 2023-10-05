#include <stdio.h>

#define TAMANHO 10

int main() {
    float vetor[TAMANHO];
    int quantidadeNegativos = 0;
    float somaPositivos = 0;

    printf("Digite 10 números reais:\n");

    // valores e realiza as contagens/somas
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%f", &vetor[i]);

        if (vetor[i] < 0) {
            quantidadeNegativos++;
        } else {
            somaPositivos += vetor[i];
        }
    }

    printf("Quantidade de números negativos: %d\n", quantidadeNegativos);
    printf("Soma dos números positivos: %.2f\n", somaPositivos);

    return 0;
}