/******************************************************************************
1. Recebe 2 valores inteiros (base e expoente), positivos e maiores que zero 
2. calcule a potencia desses valores sem utilizar funções e o sinal de multiplicação (*).

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int basefix, basealt, expoente, cont = 0, cont2 = 1;
    
    printf("Digite a Base e o Expoente. Ambos devem ser inteiros, positivos e maiores que zero.\n");
    scanf("%d %d",&basefix,&expoente);
    
    while(cont == 0){
        if(basefix <= 0){
            printf("Base invalida. Digite um numero inteiro, positivo e maior que zero.\n");
            scanf("%d",&basefix);
        }
        else if(expoente <= 0){
            printf("Expoente invalido. Digite um numero inteiro, positivo e maior que zero.\n");
            scanf("%d",&expoente);
        }
        else{
            basealt = basefix;
            cont = 1;
            while(cont2 < expoente){
                basealt = basealt + basefix;
                cont2++;
            }
        }   
    }
    printf("Resultado: %d",basealt);
}
