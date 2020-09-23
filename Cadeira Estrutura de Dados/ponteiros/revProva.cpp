#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia, mes, ano;
} data; //criei uma struct e defini ela como um tipo "data"

int main()
{
    int valor1 = 10;
    
    int *valor2; // criei um ponteiro do tipo int
    printf("valor2 esta em %p\n", valor2);
    
    valor2 = malloc(sizeof(int)); //diz que o valor2 tem o tamanho de int
    
    data data1; //criei uma variável do tipo data (struct)
    data1.dia=22; 
    data1.mes=9;
    data1.ano=2020; //atribui valor as variaveis dentro da variável do tipo data (struct)
    
    data *data2; //criei um ponteiro do tipo data (struct)

    data2 = malloc(sizeof(data)); //diz que o data2 tem o tamanho de data
    printf("data2 esta em %p\n", data2);
    
    return 0;
}