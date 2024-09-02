#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10

struct vetor{
    unsigned tamanho;
    int *pData;
};

int *alocarMemoria(int);
void preencherVetor(int *, int, int);
void imprimirVetor(struct vetor);
void calcularDiferenca(struct vetor, struct vetor, int *, int);

#define TAM 10

int main(int argc, char **argv){
    struct vetor v1, v2, dif;

    if (argc!=2){
        printf("Formato:\n\t\t %s <tamanho do vetor>\n\n",*argv);
        exit(1);
    }  

    v1.tamanho = atoi(*(argv+1));
    v2.tamanho = atoi(*(argv+1));
    dif.tamanho = atoi(*(argv+1));

    v1.pData = alocarMemoria(v1.tamanho);
    v2.pData = alocarMemoria(v2.tamanho);
    dif.pData = alocarMemoria(dif.tamanho);

    srand(time(NULL));
    preencherVetor(v1.pData, v1.tamanho, MX);
    puts("Vetor 1");
    imprimirVetor(v1);
    preencherVetor(v2.pData, v2.tamanho, MX);
    puts("Vetor 2");
    imprimirVetor(v2);

    calcularDiferenca(v1, v2, dif.pData, dif.tamanho);
    puts("Diferença");
    imprimirVetor(dif);

    return 0;

}

int *alocarMemoria(int t){
    int *p = (int *) malloc(t * sizeof(int));
    return p;
}

void preencherVetor(int *p, int t, int mx){
    for (register int k=0; k<t; k++){
        *(p+k) = rand() % mx;
    }
}

void imprimirVetor(struct vetor v){
    for (register int k=0; k<v.tamanho; k++){
        printf("%d\n",*(v.pData + k));
    }
}

void calcularDiferenca(struct vetor a, struct vetor b, int *p, int t){
    for (register int k=0; k<t; k++){
        *(p+k) = *(a.pData + k) - *(b.pData + k);
    }
}
