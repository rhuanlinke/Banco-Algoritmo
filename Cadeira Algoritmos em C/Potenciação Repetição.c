
/******************************************************************************
1. Recebe 2 valores inteiros (base e expoente), positivos e maiores que zero 
2. calcule a potencia desses valores sem utilizar funções e o sinal de multiplicação (*).

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    int basefix, expoente, cont, cont2 = 1, cont3, basealt, cont4;
    
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
                cont2++;
                cont4 = 0;
                cont3 = 1;
                    while(cont3 <= basefix){
                    cont4 = cont4 + basealt;
                    cont3++;
                    }
                basealt = cont4;
                }
        }   
    }
    printf("Resultado: %d",basealt);
}