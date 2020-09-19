#include <stdio.h>
#include <stdlib.h>
#include <iostream>
 
using namespace std;
 
int main() {
    string NAME;
    float SALES, FSALARY, SALARY;
    
    scanf("%s"&NAME);
    scanf("%f",&FSALARY);
    scanf("%f",&SALES);
    
    SALARY = FSALARY + SALES*0.15;
    
    printf("TOTAL = R$ %.2f\n",SALARY);
    
    return 0;
}