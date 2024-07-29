#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15
#define MX 10

int main(){

    int v[TAM];
    int num;
    int *pnum = &num;

    int *pv = v; // int *pv = &v[0];

    // Preencher o vetor
    srand(time(NULL));

    for (int k=0; k<TAM; k++){
        *(pv+k) = rand() % MX;
    }

    puts("Entre com o número a ser buscado no vetor: ");
    scanf("%d",pnum);

    // Busca
    int *p = NULL;
    for (int k=0; k<TAM; k++){
        if (*pnum == *(pv+k)){
            p = pv + k;
            break;
        }
    }

    // Imprimir
    puts("Vetor gerado: "); 
    for (int k=0; k<TAM; k++){
        printf("[%p] %d\n",pv+k, *(pv+k));
    }

    printf("\n");
    (p)?printf("End. primeira ocorrência de %d no vetor: %p\n\n",*pnum, p):printf("%d não ocorre no vetor! \n",*pnum);

    //======
    int *pmm[2] = {NULL}; // menor, maior

    pmm[0] = pv;
    pmm[1] = pv;
    for (int k=0; k<TAM; k++){
        pmm[0] = (*pmm[0] > *(pv+k))?pv+k:pmm[0]; // menor
        pmm[1] = (*pmm[1] < *(pv+k))?pv+k:pmm[1]; // maior
    }

    printf("End. do menor: %p\n",*(pmm+0));
    printf("End. do maior: %p\n",*(pmm+1));

    return 0;

}