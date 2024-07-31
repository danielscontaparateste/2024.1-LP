#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10

int main(){
    int *p = NULL, qtd;

    puts("Entre com a quantidade de elementos: ");
    scanf("%d",&qtd);

    //Alocar memória
    // p = malloc(qtd * sizeof(int));
    // if (!(p)){
    //     puts("Memória indisponível");
    //     exit(1);
    // }
   
    if (!( p = (int*) malloc(qtd * sizeof(int)))){
        puts("Memória indisponível");
        exit(1);
    }
    
    //Preencher o vetor
    srand(time(NULL));
    for (int k=0; k<qtd; k++){
        *(p+k) = rand() % MX;
    }

    // Exibir o vetor
    for (int k=0; k<qtd; k++){
        printf("[%p] %d\n",p+k, *(p+k));
    }

    return 0;

}