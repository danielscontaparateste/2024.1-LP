#include <stdio.h>
#include <stdlib.h>

struct aluno{
    float nota1;
    float nota2;
    float nota3;
    float media;
};

// #define TAM 3

void calcularMedia(struct aluno *p, int qtd);

int main(){
    int qtdAlunos;
    puts("Informe a quantidade de alunos");
    scanf("%d",&qtdAlunos);

    struct aluno *p;

    p = malloc(qtdAlunos * sizeof(struct aluno));
    if (!p){
        puts("Problema com a alocação de memória");
        exit(1);
    }
    
    for (int k=0; k<qtdAlunos; k++){
        p[k].nota1 = 9.0;
        (p+k)->nota2 = 5.0;
        (*(p+k)).nota3 = 10.0;
    }
    
    calcularMedia(p, qtdAlunos);

    for (int k=0; k<qtdAlunos; k++){
        puts("===");
        printf("Media do Aluno %d : %.2f\n", k, p[k].nota1);
        printf("Media do Aluno %d : %.2f\n", k, p[k].nota2);
        printf("Media do Aluno %d : %.2f\n", k, p[k].nota3);
        
    }

    return 0;

}

// void calcularMedia(struct aluno *p, int qtd){
//     for (int k=0; k<qtd; k++){
//         p[k].media = ( (p[k].nota1 + p[k].nota2 + p[k].nota3)/ 3);
//     }
// }

void calcularMedia(struct aluno *p, int qtd){
    for (int k=0; k<qtd; k++){
        (p+k)->media = ( ((p+k)->nota1 + (*(p+k)).nota2 + p[k].nota3)/ 3);
    }
}



