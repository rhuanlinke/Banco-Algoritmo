#include <stdio.h>
#include <stdlib.h>
#include <iostream>
 
using namespace std;
 
int main() {
    float A, B, C, MEDIA;
    
    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);
    MEDIA = (A*2+B*3+C*5)/(2+3+5);
    printf("MEDIA = %.1f\n",MEDIA);
    
    return 0;
}