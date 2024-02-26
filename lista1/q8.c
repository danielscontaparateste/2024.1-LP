#include <stdio.h>
#include <math.h>

int main(){
    int x, y;

    puts("Entre com um valor: ");
    scanf("%d",&x);

    y = pow(x, 2);

    printf("Resultado: %d\n",y);


    return 0;
}