/*5.Escreva um algoritmo que leia um número n (número de termos de uma progressão aritmética);
* a1 ( o primeiro termo da progressão) 
* e r (a razão da progressão) e escreva os n termos desta progressão, bem como a soma dos elementos. */

#include <stdio.h>

int main(){

int n, a1, r, cont = 0;

printf("Progressao Aritmetica\nDigite o numero de termos desejado:\n");
scanf("%d",&n);
printf("Digite o primeiro termo da progressao:\n");
scanf("%d",&a1);
printf("Digite a razao da progressao\n");
scanf("%d",&r);

while(cont < n){
    cont ++;
    printf("%d ",a1);
    a1 = a1 + r;
    }
}