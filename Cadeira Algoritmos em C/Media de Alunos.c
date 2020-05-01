#include<stdio.h>

/*Escreva um algoritmo que o professor informa quantos alunos possui e calcule a média aritmética das 3 notas de cada alunos, imprime se aprovou ou reprovou,
apresente media de cada aluno, apresente a media da turma inteira e a porcentagem de alunos aprovados e reprovados.*/

int main(){
	
    float contador = 0, alunos, contaprovado = 0, contreprovado = 0;
    float nota1, nota2, nota3, media, somanota;
    printf("Quantos alunos? ");
    scanf("%f",&alunos);
    
    while(contador < alunos){
        contador = contador + 1;
        printf("\nDigite a primeira, segunda e terceira nota:\n");
        scanf("%f %f %f",&nota1, &nota2, &nota3);
        media = (nota1+nota2+nota3)/3;
        printf("Media do aluno: %f\n",media);
        somanota = media + somanota;
        
        if(media >= 7.00){
            printf("Aprovado\n");
            contaprovado = contaprovado + 1;
        }
        else{
            printf("Reprovado\n");
            contreprovado = contreprovado + 1;
        }
        
    }
    contaprovado = (contaprovado/alunos)*100;
    contreprovado = (contreprovado/alunos)*100;
    somanota = somanota/alunos;
    printf("\nMedia da turma: %f\n",somanota);
    printf("Porcentagem de alunos aprovados: %f\n",contaprovado);
    printf("Porcentagem de alunos reprovados: %f\n",contreprovado);
    
    
}