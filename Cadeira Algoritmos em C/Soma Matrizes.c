#include <stdio.h>

int main()
{
    int matriz[5][5], i, j, soma=0;;
    
    printf("Digite 25 nros inteiros\n");
    
    i = 0;
    while(i < 5){
        j = 0;
        while(j < 5){
            scanf("%d",&matriz[i][j]);
            soma = matriz[i][j] + soma;
            j++;
        }
        i++;
    }
    printf("Soma dos valores: %d",soma);
}
