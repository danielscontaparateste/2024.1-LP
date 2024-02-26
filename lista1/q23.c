#include <stdio.h>

int main(){
    int x;

    // Entrada de Dados
    puts("Entre com um número de três dígitos");
    scanf("%d",&x);

    // Processamento
    int c, d, u;

    c = x / 100;
    d = (x % 100) / 10;
    u = (x % 100) % 10;

    int y;
    y = u * 100 + d * 10 + c; 


    // Saída
    printf("Valor de x: %d\nValor de y: %d\n",x, y);


    return 0;
}