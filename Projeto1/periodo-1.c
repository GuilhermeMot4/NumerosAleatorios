#include <stdio.h>
#include "lcrandom.h"

//Nome: Guilherme Ferreira Mota GRR: 20197268

    unsigned long valores[10000000];

int main(){

    //declaração de variáveis
    unsigned long i;
    extern unsigned long x,parA,parC,parM;

    //atribui valor inicial 0 aos elementos do vetor
    for(i=0;i<10000000;i++){
        valores[i] = 0;
    }    

    //laço "infinito" que verifica periodo 
    for(i=0; ;i++){
        x = lcrandom(); //recebe o número
        if(valores[x] == 1){ //se a posição estiver igual a 1, o elemento está se repetindo
            break; //sai do laço
        }else{
            valores[x] = 1; //senão indica na posicao do valor que o mesmo já foi gerado
        }
        lcrandom_seed(x); //atualiza valor da semente para novo cálculo
    }

    printf("Período com os valores (A = %lu, C = %lu, M = %lu) vale: %lu\n", parA, parC, parM, i); //exibe o período


return(0);
}
