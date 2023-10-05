#include <stdio.h>

#define TAMANHO 6

int main() {
    int vetor[TAMANHO];

    printf("Digite 6 valores inteiros pares:\n");

    // valores do vetor
    for (int i = 0; i < TAMANHO; i++) {
        do {
            scanf("%d", &vetor[i]);
            if (vetor[i] % 2 != 0) {
                printf("Valor inválido! Digite um número par:\n");
            }
        } while (vetor[i] % 2 != 0);
    }

    printf("Valores lidos na ordem inversa:\n");

    // valores na ordem inversa
    for (int i = TAMANHO - 1; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }

    return 0;
}