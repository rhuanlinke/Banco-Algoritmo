/******************************************************************************

2.Escrever um algoritmo que leia um conjunto de 50000 informações contendo, cada uma delas, a altura e o sexo de uma pessoa 
(código=1, masculino  e código=2, feminino), calcule e mostre o seguinte: 

a) a maior e a menor altura da turma
b) a média da altura das mulheres
c) a média da altura da turma

*******************************************************************************/
#include <stdio.h>

int main()
{
    int contador = 1, contadorm = 1, sexo;
    float altura, alturam = 0.00, alturat = 0.00, menoraltura, maioraltura;

    printf("Calculo de Alturas da Turma\n\n");
    
    while(contador <= 50000){
        printf("Qual altura do aluno?\n");
        scanf("%f",&altura);
        printf("Qual o sexo do aluno?\n1. Masculino\n2. Feminino\n");
        scanf("%d",&sexo);
        contador = contador + 1;
        alturat = alturat + altura;
        if (sexo = 2){
            alturam = alturam + altura;
            contadorm = contadorm + 1;
        }
        if (altura > maioraltura){
            maioraltura = altura;
        }
        if (altura < menoraltura || altura > 0.00){
            menoraltura = altura;
        }
    }
    printf("\nA maior e a menor altura da turma, respectivamente sao:\nMaior: %f\nMenor: %f",maioraltura,menoraltura);
    printf("\nMedia da altura das mulheres: %f",alturam/contador);
    printf("\nMedia da altura da turma: %f",alturat/contadorm);

}
