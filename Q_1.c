#include <stdio.h>

int main(void){

    int numeros[6];
    for (int i=0; i < 6; i++)
    {
        printf("Digite o %dº numero:", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("Os numeros digitados foram: ");
    for ( int i=0; i < 6; i++)
    {
        printf("%d ", numeros[i]);
    }
    return 0;
}
