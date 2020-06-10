/******************************************************************************
11. Faça um algoritmo onde o usuário define a quantidade de pessoas de uma região que participarão de 
uma pesquisa e que armazena para cada uma das pessoas as informações de CPF, sexo , idade e o salário. 
No final deve informar:
- A média de salário das pessoas pesquisadas do sexo feminino com idade mair que 18.
- O maior salario e o CPF dessa pessoa.
- Quantidade que possuem um salário igual a R$ 650,00 que são homens.
- A idade e cpf das pessoas que não são do sexo masculino que tem idade menor que 70.
*******************************************************************************/

#include <stdio.h>

int main(){
    
    int i, j=0, h=0, m=0;
    
    printf("Quantas pessoas?\n");
    scanf("%d",&i);
    
    int pessoas[i], cpf[i], sexo[i], idade[i], salario[i], soma=0, maior=0, cpfmaior=0;

    while(j < i){
        printf("Qual CPF?\n");
        scanf("%d",&cpf[j]);
        printf("Qual o genero?\n(1) M\n(2) F\n");
        scanf("%d",&sexo[j]);
        printf("Qual a idade?\n");
        scanf("%d",&idade[j]);
        printf("Qual o salario?\n");
        scanf("%d",&salario[j]);
        if(sexo[j] == 2 && idade[j] > 18){
            soma = soma+salario[j];
            m++;
        }
        if(salario[j] > maior){
            maior = salario[j];
            cpfmaior = cpf[j];
        }
        if(salario[j] == 650 && sexo[j] == 1){
            h++;
        }
        j++;
    }
    soma = soma/m;
    printf("A média de salário das pessoas pesquisadas do sexo feminino com idade mair que 18: %d\n",soma);
    printf("O maior salario e o CPF dessa pessoa: %d e %d\n",maior, cpfmaior);
    printf("Quantidade que possuem um salário igual a R$ 650,00 que são homens: %d\n",h);
    
    j=0;
    while(j < i){
        if(idade[j] < 70 && sexo[j] != 1){
            printf("\nPessoas que não são do sexo masculino que tem idade menor que 70:\nIdade: %d\nCPF: %d\n",idade[j],cpf[j]);
        }
        j++;
    }
    
    

}
