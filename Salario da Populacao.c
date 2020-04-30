/******************************************************************************

A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:

a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$200,00.

O final da leitura de dados se dará com a entrada de um salário negativo.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int contador = 0;
    float filhos, somafilhos, salario, maiorsalario, contadorsalarioate, somasalario = 0.00, populacao;

    printf("Coleta de dados da prefeitura.\n\nQual a populacao da cidade?\n");
    scanf("%f",&populacao);
    
    while(contador < populacao){
        contador = contador + 1;
        printf("\nQual o seu salario?\n");
        scanf("%f",&salario);
        somasalario = salario + somasalario;
        if (salario > maiorsalario){
            maiorsalario = salario;
        }
        if (salario <= 200.00){
            contadorsalarioate = contadorsalarioate + 1;
        }
        printf("\nQuantos filhos voce tem?\n");
        scanf("%f",&filhos);
        somafilhos = somafilhos + filhos;
    }
    
    printf("\nMedia do salario da populacao: %f",somasalario/populacao);
    printf("\nMedia do numero de filhos: %f",somafilhos/populacao);
    printf("\nMaior salario: %f",maiorsalario);
    printf("\nPercentual de pessoas com salario ate R$200,00: %f",(contadorsalarioate/populacao)*100);
}
