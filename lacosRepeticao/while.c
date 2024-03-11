#include <stdio.h>

int main(){
    int x;

    puts("Digite um número: ");
    scanf("%d",&x);

    while(!(x%2)){
        puts("Digite um número: ");
        scanf("%d",&x);
    }

    // Loop Infinito
    // while(1){
    //     puts("Olá ");
    // }

    return 0;
}