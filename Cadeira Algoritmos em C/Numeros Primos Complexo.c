/******************************************************************************

 Faça um algoritmo que recebe uma quantidade de numeros definida pelo usuario e faz as sequintes verificações:

1 Verifica quantos desses numeros sao primos e maiores que 1000.
2 Verifica qual o maior e menor numero primo digitado pelo usuario.
3 Faz a media aritimetica dos numeros primos encontrados.

*******************************************************************************/

#include<stdio.h>

int main(){
	
    int qtdnro, nro, resto, maiornro = 0, menornro = 0, cont = 0, cont2, cont3, cont4 = 0, cont5 = 0;
    float somaprimo = 0, mediaprimo;
    
    printf("Quantidade de numeros:\n");
    scanf("%d",&qtdnro);
    
    while(cont < qtdnro){
        cont++;
        cont2 = 0;
        cont3 = 0;
        printf("Digite um nro\n");
        scanf("%d",&nro);
        
        while(cont2 < nro){
        cont2++;
            resto = nro % cont2;
            //printf("\nResto: %d\n",resto);
            if(resto == 0){
                cont3++;
            }
        }
        
        if(cont3 == 2){
            if(maiornro == 0){
                maiornro = nro;
            }
            if(menornro == 0){
                menornro = nro; 
            }
            somaprimo = somaprimo + nro; //3. Faz a media aritimetica dos numeros primos encontrados.
            cont4++;                     //0. Contador de numeros primos, para poder ser calculado na 3. Média aritmetica.
            if(nro > maiornro){          //2. Vrifica qual o maior numero primo digitado pelo usuario.
                maiornro = nro;
            }
            if(nro < menornro){
                menornro = nro;         //2. Verifica qual o menor numero primo digitado pelo usuario.
            }
            if(nro > 1000){
                cont5++;                //1. Verifica quantos desses numeros sao primos e maiores que 1000.
            }
        }
    }
    printf("qtd primos: %d",cont4);
    printf("\nQuantidade de primos maiores que 1000: %d", cont5);
    printf("\nMaior nro primo digitado: %d",maiornro);
    printf("\nMenor nro primo digitado: %d",menornro);
    printf("\nMedia dos primos: %.2f",somaprimo/cont4);
}