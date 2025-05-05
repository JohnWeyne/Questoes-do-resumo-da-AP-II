#include <stdio.h>

int main() {
    int vetor[8];
    int i, x, y, soma;

    printf("Digite 8 valores para o vetor:\n");
    for (i = 0; i < 8; i++) {
        printf("Posicao [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite a posicao X (entre 0 e 7): ");
    scanf("%d", &x);
    printf("Digite a posicao Y (entre 0 e 7): ");
    scanf("%d", &y);

    if (x < 0 || x > 7 || y < 0 || y > 7) {
        printf("Erro: as posicoes devem estar entre 0 e 7.\n");
    } else {
        soma = vetor[x] + vetor[y];
        printf("Soma dos valores nas posicoes %d e %d: %d\n", x, y, soma);
    }

    return 0;
}
