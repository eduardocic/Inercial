#include <time.h>
#include <stdlib.h>
#include "matrix.h"
#include "mat.h"


void randu(int size, double minValue, double maxValue, int seed, matrix *M){
/* ========================================================================= 
 *  Função que retorna um vetor coluna de números distribuídos uniforme-
 *  mente dentro de um intervalo dado. Pode ser inicializado com uma se-
 *  mente (seed) 
 * ========================================================================= */
    
    /* Inicializador de semente */
    if (seed == 0){
        srand(time(NULL));
    } else {
        srand(seed);
    }
    
    /* Retorno de valores dentro do sistema */
    int max = RAND_MAX;
    for (int i = 0 ; i < size ; i++){
        M->data[i] = minValue + ((maxValue - minValue))*(double)rand()/max;
    }
} 



void randn(int size, int seed, matrix *M){
/* ========================================================================= 
 *  Função que retorna um vetor coluna de números distribuídos normalmente
 *  dentro de um intervalo dado. Pode ser inicializado com uma semente (seed) 
 * ========================================================================= */
    /* Inicializador de semente */
    if (seed == 0){
        srand(time(NULL));
    } else {
        srand(seed);
    }
    /* Retorno de valores dentro do sistema */
    int max = RAND_MAX;
    double sum;
    for (int i = 0 ; i < size ; i++){
        sum = 0.0;        
        for (int j = 0 ; j < 12 ; j++){
            sum += (double)rand()/max;
        }
        sum -= 6.0;
        M->data[i] = sum;
    }
} 




/* Função que calcula o fatorial de um número inteiro */
/* ================================================== */
int fatorial(int x){
    if ( x == 1 || x == 0){
        return 1;
    } else {
        return x*fatorial(x-1);        
    }
}







