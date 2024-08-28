#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0 
#define QTD 100

int *alocarMemoria(int *, int);
void preencherVetor(int *, int, int, int, int);
void exibirVetor(int *, int);

int main(){
    int n;
    int *px = NULL;

    puts("Entre com a quantidade de elementos: ");
    scanf("%d",&n);

    // Alocação de memória
    px = alocarMemoria(NULL, n);
    srand(time(NULL));
    preencherVetor(px, 0, n, 0, 10);
    exibirVetor(px, n);
    
    int novo_n; 
    puts("Entre com a NOVA quantidade de elementos: ");
    scanf("%d",&novo_n);
    px = alocarMemoria(px, novo_n);
    preencherVetor(px, n, novo_n, 0, 10);
    exibirVetor(px, novo_n);
    // exibirVetor(px, 3);
        
    free(px);

    return 0;

}


int *alocarMemoria(int *p, int t){
    int *pr;
    if (!(pr = (int*) realloc(p, t * sizeof(int)))){
        puts("Não há memória disponível. ");
        exit(1);
    }
    return pr;
}

void preencherVetor(int *p, int pos_inicial, int t, int i, int q){
    for (int k=pos_inicial; k<t; k++){
        *(p+k) = i + rand()%q;
    }
}

void exibirVetor(int *p, int t){
    for (int k=0; k<t; k++){
        printf("[%p] %d\n",p+k, *(p+k));
    }
}