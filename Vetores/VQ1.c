#include <stdio.h>

int main() {
    int vetor[6] = {1, 0, 5, -2, -5, 7}; // (a)

    int soma = vetor[0] + vetor[1] + vetor[5]; // (b)
    printf("Soma: %d\n", soma);

    vetor[4] = 100; // (c)

    printf("Valores do vetor:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d\n", vetor[i]); // (d)
    }

    return 0;
}