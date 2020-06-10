/******************************************************************************

Faça um algoritmo que armazena em uma matriz a quantidade de numeros do tipo int definidos pelo usuário 
2. e que verifica e imprime na tela os números que são primos 
3.e que estão presentes na diagonal principal 
4.e secundaria.

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
            if (ir == 2 && i == j)
            {
                printf("Primos diagonal principal: %d\n", nro[i][j]);
            }
            if (ir == 2 && i + j == m - 1)
            {
                printf("Primos diagonal secundaria: %d\n", nro[i][j]);
            }
            j++;
        }
        i++;
    }
}
