#include <stdio.h>

#define N 3

int main(){
    int x, s=0;
    float y = 0.0;
     
    for (int k=0; k<N; k++){
        puts("Digite um número: ");
        scanf("%d",&x);
        s += x;
    }

    y = ( (float) s) / N;

    printf("\n===\n\ty = %.2f\n",y);

    return 0;

}