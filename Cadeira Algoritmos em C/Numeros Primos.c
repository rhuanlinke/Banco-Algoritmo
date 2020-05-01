#include<stdio.h>

/*Faça um algoritmo que recebe somente numeros inteiros, positivos e maiores que zero. O algoritmo deve verificar se o número informado é primo ou não.*/

int main(){
	
    int nro, nro2, cont = 0, cont2 = 0, cont3 = 0;
    printf("Digite um numero inteiro e positivo:\n");
    scanf("%d",&nro);
    
    while(cont == 0){
        if(nro < 0){
            printf("Numero negativo invalido. Digite um numero inteiro positivo:\n");
            scanf("%d",&nro);
        }
        else{
            cont = 1;
            while(cont2 < nro){
                cont2 = cont2 + 1;
                if(nro % cont2 == 0){
                 cont3 = cont3 + 1;
                }
            }
        }
    }
    if(cont3 == 2){
        printf("\nO numero %d eh primo.",nro);
    }
    else{
        printf("\nO numero %d nao eh primo.",nro);
    }
    
}