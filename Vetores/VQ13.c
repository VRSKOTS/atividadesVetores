#include <stdio.h>

#define TAMANHO 5

int main() {
    int vetor[TAMANHO];
    int maior, menor;
    int posicaoMaior, posicaoMenor;

    printf("Digite 5 valores:\n");

    // lê os valores e encontra o maior e o menor
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &vetor[i]);

        if (i == 0) {
            maior = vetor[i];
            menor = vetor[i];
            posicaoMaior = i;
            posicaoMenor = i;
        } else {
            if (vetor[i] > maior) {
                maior = vetor[i];
                posicaoMaior = i;
            }
            if (vetor[i] < menor) {
                menor = vetor[i];
                posicaoMenor = i;
            }
        }
    }

    printf("Posição do maior valor: %d\n", posicaoMaior);
    printf("Posição do menor valor: %d\n", posicaoMenor);

    return 0;
}