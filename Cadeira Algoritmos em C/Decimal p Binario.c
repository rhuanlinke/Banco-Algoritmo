#include <stdio.h>

int main(){
    int nro[2], result, i = 0, resto;

    while(result != 1){
        printf("Digite um nro:\n");
        scanf("%d",&nro[1]);
        printf("Dividir por qual nro?\n");
        scanf("%d",&nro[2]);
            result = nro[1] / nro[2];
            resto = nro[1] % nro[2];
            printf("Cont[%d]Resultado da divisao: %d",i,result);
            printf("\nCont[%d]Resto da divisao: %d\n\n",i,resto);
            i++;
    }
}