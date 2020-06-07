#include <stdio.h>

int main()
{
    int matriz[10][100], i, j, ip=0, id, ir;
    
    printf("Digite 2000 nros inteiros\n");
    
    i = 0;
    while(i < 100){
        j = 0;
        while(j < 10){
            scanf("%d",&matriz[i][j]);
            while(matriz[i][j] < 0){
                printf("Numero negativo invalido. Digite um numero inteiro positivo:\n");
                scanf("%d",&matriz[i][j]);
            }
            j++;
        }
        i++;
    }

    while(i < 100){
        j = 0;
        while(j < 10){
            id = 1;
            ir = 0;
            while(id <=matriz[i][j]){
                if(matriz[i][j] % id == 0){
                    ir++;
                }
                id++;
            }
            if(ir == 2){
                ip++;
            }
            j++;
        }
        i++;
    }
    
    printf("Nro de primos: %d",ip);
}
