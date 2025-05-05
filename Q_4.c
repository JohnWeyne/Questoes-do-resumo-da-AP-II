#include <stdio.h>

int main() {
    int vetor[10];
    int i, pares = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Posicao [%d]: ", i);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }

    printf("Quantidade de valores pares no vetor: %d\n", pares);

    return 0;
}
