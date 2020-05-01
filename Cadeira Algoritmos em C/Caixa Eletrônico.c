#include<stdio.h>

int main(){
	
	float opcao, saldo = 0.00, saque, deposito;
	
	printf("------------------------\n");
	printf("Bem vindo ao nosso banco!\n");
	printf("------------------------\n");
	
	while(opcao != 4){
	    printf ("\nSelecione uma das opcoes:\n1 - Saldo\n2 - Saque\n3 - Deposito\n4 - Sair\n");
	    scanf("%f",&opcao);
        if(opcao == 1){
            printf ("Seu saldo e: %f\n",saldo);
            
        }
        else if(opcao == 2){
            printf ("Qual o valor do saque?\n");
            scanf ("%f",&saque);
            if(saque > saldo){
                printf ("Saldo insuficiente.\n");
                
            }
            else{
                saldo = saldo - saque;
                printf ("Seu saldo e: %f\n",saldo);
                
            }
            
        }
        else if(opcao == 3){
            printf ("Qual o valor do deposito?\n");
            scanf ("%f",&deposito);
            if(deposito < 0){
                printf ("Valor de deposito negativo invalido.\n");
                
            }
            else{
                saldo = (deposito + saldo);
                
            }
            printf ("Seu saldo e: %f\n",saldo);
            
        }
        
        else{
            printf("Opcao Invalida\n");
        }
	    
	}
    
}
