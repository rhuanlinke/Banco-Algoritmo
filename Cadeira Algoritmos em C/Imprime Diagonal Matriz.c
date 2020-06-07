#include <stdio.h>

int main()
{
    int matriz[9][9], i, j;
    
    printf("Digite nros inteiros\n");
    
    i = 0;
    while(i < 9){
        j = 0;
        while(j < 9){
            scanf("%d",&matriz[i][j]);
            j++;
        }
        i++;
    }
    
    j = 0;
    i = 0;
    while(i < 9){
        j = 0;
        while(j < 9){
            if(i == j){
                printf("Diagonal: %d\n",matriz[i][j]);
            }
            j++;
        }
        i++;
    }
    
}