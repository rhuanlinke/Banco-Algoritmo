#include <stdio.h>
#include <stdlib.h>

int main() 
{ 
    //var recebe 1
    int var = 1; 
  
    //criação do ponteiro para (nulo)
    int *ptr1;
    
    //ptr1 recebe o endereço de var
    ptr1 = &var;

    //criação de ponteiro que aponta para nulo, que aponta para nulo
    int **ptr2;
    
    int ***ptr3;
    
    int ****ptr4;

    //ptr2 recebe o endereço de ptr1, que aponta para o endereço de var
    ptr2 = &ptr1;
    
    ptr3 = &ptr2;
    
    ptr4 = &ptr3;
      
    printf("Value of var = %d\n", var ); 
    printf("Value of var using single pointer = %d\n", *ptr1 ); 
    printf("Value of var using double pointer = %d\n", **ptr2); 
    printf("Value of var using double pointer = %d\n", ***ptr3);
    printf("Value of var using double pointer = %d\n", ****ptr4);
    
  return 0; 
}  