#include "lcrandom.h"

    //Nome: Guilherme Ferreira Mota GRR: 20197268
      

    unsigned long semente = 0;
    unsigned long x;
    unsigned long parA = 40692;
    unsigned long parC = 127;
    unsigned long parM = 10000000;
     


    //função que gera um valor aleatório
    unsigned long lcrandom(){
        x = (parA*semente+parC) % parM;
        return x;
    }
 
    //função que altera a semente
    void lcrandom_seed(unsigned long s){
        semente = s;
    }
     
    //função que retorna o valor máximo
    unsigned long lcrandom_max(){
        return parM-1;
    }
     
    //função que altera os parâmetros
    void lcrandom_parms(unsigned long A, unsigned long C, unsigned long M){
        parA = A;
        parC = C;
        parM = M;  
    }




