#include<stdio.h>

int main(){
	
	float opcao, saldo, saque, deposito;
	
	printf("-------------------------\n");
	printf("Bem vindo ao nosso banco!\n\nSelecione uma das opcoes:\n1 - Saldo\n2 - Saque\n3 - Deposito\n4 - Sair\n");
	printf("-------------------------\n");
	
	saldo = 2000.00;
	
	scanf("%f",&opcao);
	
	if(opcao == 1){
	    printf ("Seu saldo e: %f\n",saldo);
	    system("pause");
	}
	else if(opcao == 2){
	    printf ("Qual o valor do saque?\n");
	    scanf ("%f",&saque);
	    if(saque > saldo){
	        printf ("Saldo insuficiente.\n");
	    }
	    else{
	        saldo = (saldo-saque);
	        printf ("Seu saldo e: %f\n",saldo);    
	    }
	    system("pause");
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
	    system("pause");
	}
	else if(opcao == 4){
	    system("exit");
	}
}
