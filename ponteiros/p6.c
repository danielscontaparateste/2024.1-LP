#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RG 10

int main(){
    int qtd;

    // Entrada da usuário
    puts("Digite a quantidade de elementos: ");
    scanf("%d",&qtd);

    // Alocação dinâmica de memória
    int *pv = NULL;
    if (!(pv = (int*) malloc(qtd * sizeof(int) ))){
        puts("Memória é insuficiente.");
        exit(1);
    }

    // Preencher o vetor
    for (int k=0; k<qtd; k++){
        *(pv+k) = rand() % RG;
    }

    // Exibir o vetor
    printf("\n ** vetor NÃO Ordenado **\n");
    for (int k=0; k<qtd; k++){
        printf("[%p] %d\n",pv+k, *(pv+k));
    }

    // Media
    int soma=0;
    for (int k=0; k<qtd; k++){
        soma += *(pv+k);
    }
    float media = ((float) soma) / qtd;

    // Mediana
    int aux;
    for (int k=0; k < qtd-1; k++){
        for (int j=k+1; j<qtd; j++){
            if (*(pv+k) > *(pv+j)){
                aux = *(pv+k);
                *(pv+k) = *(pv+j);
                *(pv+j) = aux;
            }
        }
    }
    
    // Exibir o vetor
    printf("\n ** vetor Ordenado **\n");
    for (int k=0; k<qtd; k++){
        printf("[%p] %d\n",pv+k, *(pv+k));
    }

    float mediana = (qtd%2)?*(pv + (qtd/2)):( (float)(*(pv + (qtd/2)) + *(pv + (qtd/2)-1)) )/ 2;
    
    free(pv);

    // Saída
    printf("\n");
    printf("Média: %.2f\n",media);
    printf("Mediana: %.2f\n",mediana);

    return 0;
}
