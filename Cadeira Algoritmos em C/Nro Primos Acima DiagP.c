/******************************************************************************

Faça um algoritmo que armazena em uma matriz quadrada a quantidade de numeros do tipo int definidos pelo usuário
e que verifica e imprime na tela todos os números que são primos e que estão presentes acima diagonal principal.

Ex.: Em Amarelo a diagonal principal e em Verde os elementos acima da diagonal principal

*******************************************************************************/

#include <stdio.h>

int main()
{

    int i = 0, j = 0, id = 1, ir = 0, m;

    printf("Matriz:\n");
    scanf("%d", &m);
    int nro[m][m];

    while (i < m)
    {
        j = 0;
        while (j < m)
        {
            printf("Digite um nro\n");
            scanf("%d", &nro[i][j]);
            j++;
        }
        i++;
    }
    j = 0;
    i = 0;
    while (i < m)
    {
        j = 0;
        while (j < m)
        {
            id = 1;
            ir = 0;
            while (id <= nro[i][j])
            {
                if (nro[i][j] % id == 0)
                {
                    ir++;
                }
                id++;
            }
            if (ir == 2 && j > i)
            {
                printf("Primos acima da diagonal principal: %d\n", nro[i][j]);
            }
            j++;
        }
        i++;
    }
}