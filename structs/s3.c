#include <stdio.h>


struct aluno{
    float nota1;
    float nota2;
    float nota3;
    float media;
};

// float calcularMedia(struct aluno x);
void calcularMedia(struct aluno *);

int main(){
    struct aluno a1;
    struct aluno *p = NULL;

    p = &a1;

    // a1.nota1 = 9.0;
    // a1.nota2 = 5.0;
    // a1.nota3 = 10.0;

    // (*p).nota1 = 9.0;
    // (*p).nota2 = 5.0;
    // (*p).nota3 = 10.0;

    p->nota1 = 9.0;
    p->nota2 = 5.0;
    p->nota3 = 10.0;

    // a1.media = calcularMedia(a1);
    calcularMedia(p);

    printf("Media: %.2f\n", a1.media);

    return 0;

}

// float calcularMedia(struct aluno x){
//     return ( (x.nota1 + x.nota2 + x.nota3)/ 3);
// }

void calcularMedia(struct aluno *x){
    x->media = ( (x->nota1 + x->nota2 + x->nota3)/ 3);
}



