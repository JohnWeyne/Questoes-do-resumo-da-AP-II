#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, j;
    int soma = 0;

    printf("Digite os valores da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
 
            if (i != j && i + j != 4) {
                soma += matriz[i][j];
            }
        }
    }


    printf("A soma dos elementos que nao pertencem nem a diagonal principal nem a diagonal secundaria e: %d\n", soma);

    return 0;
}
