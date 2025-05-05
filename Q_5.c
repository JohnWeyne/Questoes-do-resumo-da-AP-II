#include <stdio.h>

int main() {
    float vetor[10];
    int i, negativos = 0;
    float soma_positivos = 0;

    printf("Digite 10 numeros reais:\n");
    for (i = 0; i < 10; i++) {
        printf("Posicao [%d]: ", i);
        scanf("%f", &vetor[i]);

        if (vetor[i] < 0) {
            negativos++;
        } else {
            soma_positivos += vetor[i];
        }
    }

    printf("Quantidade de numeros negativos: %d\n", negativos);
    printf("Soma dos numeros positivos: %.2f\n", soma_positivos);

    return 0;
}
