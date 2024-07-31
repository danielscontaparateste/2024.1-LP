#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10

int main(){
    int *p = NULL, qtdLin, qtdCol;

    puts("Entre com a quantidade de linhas: ");
    scanf("%d",&qtdLin);

    puts("Entre com a quantidade de colunas: ");
    scanf("%d",&qtdCol);

    //Alocar memória
    // p = malloc(qtd * sizeof(int));
    // if (!(p)){
    //     puts("Memória indisponível");
    //     exit(1);
    // }
   
    if (!( p = (int*) malloc(qtdLin * qtdCol * sizeof(int)))){
        puts("Memória indisponível");
        exit(1);
    }
    
    //Preencher o vetor
    srand(time(NULL));
    for (int k=0; k < (qtdLin*qtdCol); k++){
        *(p+k) = rand() % MX;
    }

    // Exibir o vetor
    printf("\n");
    for (int k=0; k < (qtdLin * qtdCol); k++){
        printf("%d\t",*(p+k));
        if (!( (k+1) % qtdCol)) printf("\n");     
    }

    return 0;

}