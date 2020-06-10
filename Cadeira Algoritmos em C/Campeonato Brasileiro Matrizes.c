#include <stdio.h>

int main(){
    
    int j=1, i=2;
    int times[j][i], pontos[j][i], golsf[j][i], golss[j][i], vitorias[j][i], derrotas[j][i], menorponto=0, maiorponto=0, a=0, b=0, g=0;
    float mediad = 0, mediav = 0;
    
    while(a < j){
        b=0;
        while(b < i){
            printf("Qual a pontuacao do time?\n");
            scanf("%d",&pontos[j][i]);
            if(pontos[j][i] > maiorponto){
                maiorponto = pontos[j][i];
            }
            if(pontos[j][i] < menorponto || menorponto == 0){ //- O algoritmo deve analisar a coluna Pontos e informar qual a maior pontuação e qual a menor.
                menorponto = pontos[j][i];
            }
            printf("Quantos gols fizeram?\n");
            scanf("%d",&golsf[j][i]);
            printf("Quantos gold sofreram?\n");
            scanf("%d",&golss[j][i]);
            if(golsf[j][i] > golss[j][i]){
                g++;
            }
            printf("Quantas vitorias?\n");
            scanf("%d",&vitorias[j][i]);
            mediav = mediav + vitorias[j][i];
            printf("Quantas derrotas?\n");
            scanf("%d",&derrotas[j][i]);
            mediad = mediad + derrotas[j][i];
            b++;
        }
        a++;
    }
    mediad = mediad/(j*i);
    printf("Maior e menor pontuações: [%d], [%d]\n",maiorponto,menorponto);
    printf("Média de derrotas de todos os times: %f\n",mediad);
    printf("quantidade de times que fizeram mais gols do que sofreram: %d\n",g);
    
}
