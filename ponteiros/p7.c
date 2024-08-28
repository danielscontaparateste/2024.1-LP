#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define RG 100

int main(){
    unsigned short int qtdLin, qtdCol;

    
    // Entrada de Dados
    puts("Qual a quantidade de linhas? ");
    scanf("%hu",&qtdLin);

    puts("Qual a quantidade de colunas? ");
    scanf("%hu",&qtdCol);

    // Alocação de memória
    unsigned char **pm;

    pm = (unsigned char **) malloc(qtdLin * sizeof(unsigned char *));

    for (int k=0; k<qtdLin; k++){
        *(pm+k) = (unsigned char *) malloc(qtdCol * sizeof(unsigned char));
    }

    // Gerar dados
    srand(time(NULL));
    for (int k=0; k<qtdLin; k++){
        for (int j=0; j<qtdCol; j++){
            *(*(pm + k) + j) = rand() % RG;
        }
    }

    // Imprimir Dados
    for (int k=0; k<qtdLin; k++){
        for (int j=0; j<qtdCol; j++){
            printf("[%p] %d  ",*(pm + k) + j,*(*(pm + k) + j));
        }
        printf("\n");
    }

    // Maior e Menor Elementos
    unsigned char *pMenor, *pMaior;

    pMenor = *pm;
    pMaior = *pm;

    for (int k=0; k<qtdLin; k++){
        for (int j=0; j<qtdCol; j++){
            pMenor = (*pMenor > *(*(pm + k) + j))?*(pm + k) + j:pMenor;
            pMaior = (*pMaior < *(*(pm + k) + j))?*(pm + k) + j:pMaior;
        }
        printf("\n");
    }

    // Saída
    printf("\n********\n");
    printf("Endereço do Menor Elemento: %p\n", pMenor);
    printf("Endereço do Maior Elemento: %p\n", pMaior);

    // Implementar free() - Liberar memória.

    return 0;

}

