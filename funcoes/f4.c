#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10
#define SFT 0

int **alocarMatriz(int, int);
void preencherMatriz(int **, int, int, int, int);
void imprimirMatriz(int **, int, int);
void multPontoAPonto(int **, int **, int **, int, int);

int main(int argc, char **argv){

    int **mA = NULL, **mB = NULL, **mC = NULL;

    if (argc!=3){
        printf("Use: \n \t %s <qtdLin> <qtdCol\n\n",*argv);
        exit(1);
    }

    int lin = atoi(*(argv+1)); // argv[1]
    int col = atoi(*(argv+2)); // argv[2]

    mA = alocarMatriz(lin,col);
    mB = alocarMatriz(lin,col);
    mC = alocarMatriz(lin,col);

    srand(time(NULL));
    preencherMatriz(mA, lin, col, SFT, MX);
    preencherMatriz(mB, lin, col, SFT, MX);

    multPontoAPonto(mA, mB, mC, lin, col);

    puts("=== Matriz A ====");
    imprimirMatriz(mA, lin, col);

    puts("=== Matriz B ====");
    imprimirMatriz(mB, lin, col);

    puts("=== Matriz C ====");
    imprimirMatriz(mC, lin, col);

    return 0;

}

int **alocarMatriz(int qLin, int qCol){
    int **mat = NULL;
    mat = (int **) malloc(qLin * sizeof(int *));
    
    for(int k=0; k<qLin; k++){
        *(mat+k) = (int *) malloc(qCol * sizeof(int));
    }

    return mat;
}

void preencherMatriz(int **mat, int qLin, int qCol, int ini, int max){
    for (int k=0; k<qLin; k++){
        for (int j=0; j<qCol; j++){
            *(*(mat+k) + j) = ini + rand() % MX;
        }
    }
}

void imprimirMatriz(int **mat, int qLin, int qCol){
    for (int k=0; k<qLin; k++){
        for (int j=0; j<qCol; j++){
            printf("%5d ",*(*(mat+k) + j));
        }
        printf("\n");
    }
}

void multPontoAPonto(int **a, int **b, int **c, int qLin, int qCol){
    for (int k=0; k<qLin; k++){
        for (int j=0; j<qCol; j++){
            *(*(c+k) + j) = *(*(a+k) + j) * *(*(b+k) + j);
        }
    }
}

