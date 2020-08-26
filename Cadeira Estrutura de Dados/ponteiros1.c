#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int *ponteiro1[5], *ponteiro2, endereco = 1, valor, i;

    //valor = ponteiro1;

    for(i = 0;i < 5;i++)
    {
    printf("\n%p",ponteiro1[i]); //%p ele trará o endereço do ponteiro
    }
    //printf("\n%p",valor);

}