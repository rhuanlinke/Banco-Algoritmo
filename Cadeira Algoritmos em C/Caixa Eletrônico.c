#include <stdio.h>

int main()
{

    int cont = 0, cont2 = 0, cc[10001];
    float opcao, saldo[10001] = {0.00}, saque, deposito, qtdop[10001] = {0.00};
    
    printf("\n------------------------\n");
    printf("Bem vindo ao nosso banco!\n");
    printf("------------------------\n");

    while (cont < 10000)
    {
        printf("\nDigite o nro da sua Conta Corrente:\n");
        scanf("%d", &cc[cont]);

        while (opcao != 4)
        {
            printf("\nSelecione uma das opcoes:\n1 - Saldo\n2 - Saque\n3 - Deposito\n4 - Sair\n");
            scanf("%f", &opcao);
            qtdop[cont]++;
            //printf("\n%dCont\n",cont);
            if (opcao == 1)
            {
                printf("Seu saldo e: %f\n", saldo[cont]);
            }
            else if (opcao == 2)
            {
                
                printf("Qual o valor do saque?\n");
                scanf("%f", &saque);
                if (saque > saldo[cont])
                {
                    printf("Saldo insuficiente.\n");
                }
                else
                {
                    saldo[cont] = saldo[cont] - saque;
                    printf("Seu saldo e: %f\n", saldo[cont]);
                }
            }
            else if (opcao == 3)
            {
                
                printf("Qual o valor do deposito?\n");
                scanf("%f", &deposito);
                if (deposito < 0)
                {
                    printf("Valor de deposito negativo invalido.\n");
                }
                else
                {
                    saldo[cont] = (deposito + saldo[cont]);
                }
                printf("Seu saldo e: %f\n", saldo[cont]);
            }
            else if (opcao == 4)
            {
                
                printf("Obrigado por visitar nosso banco!\n");
            }

            else
            {
                printf("Opcao Invalida\n");
            }
        }
        cont++;
        opcao = 0;
        saldo[cont] = 0.00;
        //printf("\n Qtdop %f\n",qtdop[0]);
    }
    while (cont2 < 10000)
    {
        //printf ("\n%d",cont2);
        printf("\nConta corrente: %d\nSaldo Final: %f\nQuantidade de Operacoes: %f", cc[cont2], saldo[cont2], qtdop[cont2]);
        printf("\n------------------------------\n");
        cont2++;
    }
}
