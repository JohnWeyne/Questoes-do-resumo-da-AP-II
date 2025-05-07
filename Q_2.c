#include <stdio.h>

int main(){
    
    int numeros[5];
    int soma;

    for (int i = 0; i < 5; i++)
    {
        printf("digite o %dº numeros:", i +1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }
    printf("Os numeros digitados foram: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", numeros[i]);
    }
    printf("\n A media de todos os numeros e: %d\n", soma / 5);
    
    return 0;
}
