#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int *ponteiro1[5], *ponteiro2, endereco = 1, valor, i;
    int *o, p, *j, *k;
    //valor = ponteiro1;

    for(i = 0;i < 5;i++)
    {
    printf("\n%p",ponteiro1[i]); //%p ele trará o endereço do ponteiro
    }
    //printf("\n%p",valor);
    p = 10;
    o = &p; //& devolve o endereço na memória do seu operando. Dentro de "o" ficará o endereço de p.
    j = &p;
    valor = *o; //*o tem um valor dentro de si
    printf("\n\n\n%d",valor);
    printf("\n\n\n%d",o);
    printf("\n\n\n%p",o);
    printf("\n\n\n%d",j);
}