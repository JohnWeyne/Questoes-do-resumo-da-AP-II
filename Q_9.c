#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int count = 0;

    printf("Digite os valores da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] > 10) {
                count++;
            }
        }
    }

    printf("A matriz possui %d valores maiores do que 10.\n", count);

    return 0;
}
