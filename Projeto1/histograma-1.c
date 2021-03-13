#include <stdio.h>
#include "lcrandom.h"

//Nome: Guilherme Ferreira Mota GRR: 20197268

#define max 99

int main(){

    //declaração de variáveis
	unsigned long valores[100];
    unsigned long i,j,maior,porcentRepete, num;
    extern unsigned long semente,x;
    
    //atribui valor inicial 0 aos elementos do vetor
	for (i = 0; i < 100; i++){
		valores[i] = 0;
    }
    
    
    valores[semente]++; //incrementa 1 no valor de repetição da semente 

    //gera valor aleatório, incrementa aparição e altera valor da semente para novo cálculo
    for(i=1;i<1000000;i++){
        x = lcrandom();
        num = x % 100;
        valores[num]++;
        lcrandom_seed(x);
    }
    
    //encontra o valor com maior incidência
    maior = 0;
    for(i=0;i<=max;i++){
       if(valores[i] > maior){
            maior = valores[i];
        }
    }

    //exibe o respectivo histograma 
    printf("   0   10   20   30   40   50   60   70   80   90   100\n");
    printf("   +----+----+----+----+----+----+----+----+----+----+\n");
    for(i=0;i<=max;i++){
        printf("%02lu |", i);
        porcentRepete = (valores[i]*100)/maior;
        porcentRepete = porcentRepete/2;
        for(j=1;j <= porcentRepete;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("   +----+----+----+----+----+----+----+----+----+----+\n");

return(0);
}
