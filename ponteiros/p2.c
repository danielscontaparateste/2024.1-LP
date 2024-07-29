#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MX 100 

int main(){

    int v[TAM];
    int *pv = NULL;
    
    pv = v; 

    char vch[TAM];

    srand(time(NULL));

    // Preencher os vetores
    for (int k=0; k<TAM; k++){
        *(pv+k) = rand() % MX;
        *(vch+k) = rand() % MX;
    }

    // Imprimir os vetores
    puts("Vetor de inteiros: ");
    for (int k=0; k<TAM; k++){
        printf("[%p] : %d\n",pv+k, *(pv+k));
    }

    puts("======");
    puts("Vetor de char: ");
    for (int k=0; k<TAM; k++){
        printf("[%p] : %d\n",vch+k, *(vch+k));
    }

    // Buscar o Maior Valor dos vetores
    int *pvMax = pv; // Assumir inicialmente que primeiro é o maior.
    for (int k=1; k<TAM; k++){
        pvMax = (*pvMax < *(pv+k))?pv+k:pvMax;
    }    

    char *pcMax = vch; // Assumir inicialmente que primeiro é o maior.
    for (int k=1; k<TAM; k++){
        pcMax = (*pcMax < *(vch+k))?vch+k:pcMax;
    }

    // Imprimir os endereços 
    printf("\n");
    printf("Endereço do maior valor (inteiros):\t %p\n",pvMax);
    printf("Endereço do maior valor (char):\t %p\n",pcMax);

    return 0;

}