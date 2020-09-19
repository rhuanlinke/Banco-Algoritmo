#include <stdio.h>
#include <stdlib.h>
#include <iostream>
 
using namespace std;
 
int main() {
    int NUMBER, WHOURS;
    float CASH, SALARY;
    
    scanf("%d",&NUMBER);
    scanf("%d",&WHOURS);
    scanf("%f",&CASH);
    
    SALARY = CASH * WHOURS;
    
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",NUMBER, SALARY);
    
    return 0;
}