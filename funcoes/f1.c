#include <stdio.h>

int somar(int, int);
int multiplicar (int, int);
int subtrair(int, int);
void dividir(int *, int *, float *);
void menu();

int main(){

    // Entrada de Dados
    int x, y;
    puts("Entre com o primeiro número: ");
    scanf("%d",&x);
    puts("Entre com o segundo número: ");
    scanf("%d",&y);

    int op; 
    do{
        menu();
        puts("####");
        puts("Digite a opção desejada");
        scanf("%d",&op);
    }while(op < 1 || op > 4);      

    // Processamento
    float z;
    switch(op){
        case 1:
            z = somar(x, y);
        break;   
        case 2:
            z = subtrair(x, y);
        break;
        case 3:
            z = multiplicar(x, y);
        break; 
        case 4: 
            dividir(&x, &y, &z);
        break;
    }

    // Saída
    printf("Resultado: %.2f\n",z);    

    return 0;
}

int somar(int a, int b){
    return (a+b);
}

int multiplicar (int a, int b){
    return (a*b);
}

int subtrair(int a, int b){
    return (a-b);
}

void dividir(int *pa, int *pb, float *pr){
    *pr = ( (float) *pa / *pb);
}

void menu(){
    puts("Operações disponíveis: ");
    puts("1. Somar");
    puts("2. Subtrair");
    puts("3. Multiplicar");
    puts("4. Dividir");
}