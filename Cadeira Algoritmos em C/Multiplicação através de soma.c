/******************************************************************************

Faça um algoritmo que calcule a multiplicação entre dois numeros sem utilizar o sinal de multiplicação ( *. 
Utilize estrutura de repetição e soma.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int nro1, nro2, result = 0, cont = 0;
    
    printf("Digite dois numeros, onde o primeiro sera multiplicado pelo segundo:\n");
    scanf("%d",&nro1);
    scanf("%d",&nro2);
    
    if(nro2 == 0 || nro1 == 0){
        nro1 = 0;
        nro2 = 0;
    }
    
    while(cont < nro2){
        result = result + nro1;
        cont = cont + 1;
    }
    printf("Resultado: %d",result);
}