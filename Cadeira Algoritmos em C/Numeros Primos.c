#include<stdio.h>

/*4.  Escrever um algoritmo que recebe 1000 numeros e armazena em um Vetor somente os numeros primos.*/

int main(){
	
    int nro, nro2, cont = 0, cont2 = 0, cont3 = 0, primos[1000];
    printf("Digite um numero inteiro e positivo:\n");
    scanf("%d",&nro);
    
    while(cont3 < 1000){
        printf("Digite um numero inteiro e positivo:\n");
        scanf("%d",&nro);
            if(nro < 0){
                printf("Numero negativo invalido. Digite um numero inteiro positivo:\n");
                scanf("%d",&nro);
            }
            else{
                cont3++;
                while(cont2 < nro){
                    cont2 ++;
                    if(nro % cont2 == 0){
                    primos[cont3] = nro;
                    
                }
            }
        }
    }
    
}