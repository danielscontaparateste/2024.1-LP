#include <stdio.h>

int main(){
    int x;

    do {
        puts("Digite um número: ");
        scanf("%d",&x);
    }while(!(x%2));

    return 0;
}