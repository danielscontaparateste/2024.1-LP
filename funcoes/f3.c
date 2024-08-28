#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 100
#define SFT 0

void imprimirVetor(unsigned int *, int);
void gerarVetor(unsigned *, int );
unsigned int *getMenor(unsigned *, int);

int main(int argc, char *argv[]){
    
    if (argc != 2){
        printf("\tUse %s <tamanhoVetor>\n\n",argv[0]);
        exit(1);
    }

    int n = atoi(argv[1]); // Tamanho do vetor
    unsigned int *p;

    p = (unsigned int*) malloc(n * sizeof(unsigned int));

    if (!p){
        puts("Não existe memória disponível. Tente novamente.");
        exit(1);
    }

    srand(time(NULL));
    gerarVetor(p, n);
    imprimirVetor(p, n);

    // Processamento
    unsigned *pMenor = getMenor(p, n);
    
    printf("Endereço do menor elemento do vetor gerado é: %p\n",pMenor);

    free(p);

    return 0;

}

void imprimirVetor(unsigned int *q, int tamanho){

    for (int k=0; k<tamanho; k++){
        printf("[%p] %u\n",q+k,*(q+k));
    }

}

void gerarVetor(unsigned *q, int tamanho){
    for(int k=0; k<tamanho; k++){
        *(q+k) = SFT + rand() % MX; 
    }
}

unsigned int *getMenor(unsigned *p, int tamanho){
    unsigned *pMenor = p;
    for (int k=1; k<tamanho; k++){
        if (*pMenor > *(p+k)){
            pMenor = p+k;
        }
    }
    return pMenor;
}