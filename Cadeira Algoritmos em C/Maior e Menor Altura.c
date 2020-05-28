/*2. Escreva um algoritmo que armazene em vetores 1000 informações contendo, 
cada uma delas, a altura e o sexo de uma pessoa 
(código=1, masculino  e código=2, feminino), calcule e mostre o seguinte:

- A maior e a menor altura da turma.
- A média da altura das mulheres.
- A média da altura da turma. */

#include <stdio.h>

int main()
{

    float altura[4], maior_altura, menor_altura, media_mulher = 0, media_turma = 0;
    int sexo[4], cont = 0, cont2 = 0;

    while (cont < 4)
    {
        printf("Qual sua altura?\n");
        scanf("%f", &altura[cont]);
        maior_altura = altura[cont];
        menor_altura = altura[cont];
        printf("Qual seu sexo?\n1 =M\n2 =F\n");
        scanf("%d", &sexo[cont]);
        if (sexo[cont] == 2)
        {
            media_mulher = altura[cont] + media_mulher;
            cont2++;
        }
        if (altura[cont] > maior_altura)
        {
            maior_altura = altura[cont];
        }
        else if (altura[cont] < menor_altura)
        {
            menor_altura = altura[cont];
        }
        media_turma = altura[cont] + media_turma;
        cont++;
        printf("\n");
    }
    media_mulher = media_mulher / cont2;
    media_turma = media_turma / cont;
    printf("Maior altura: %f\nMenor altura: %f\n", maior_altura, menor_altura);
    printf("Media da altura das mulheres: %f\nMedia da altura da turma: %f", media_mulher, media_turma);
}