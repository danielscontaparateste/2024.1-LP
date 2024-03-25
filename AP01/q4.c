#include <stdio.h>

#define NUM_EQUIPAMENTOS 4

int main(){

    const unsigned char cod = 140; //1000 1100

    unsigned char mask = 0x01;

    unsigned char id;

    puts("Digite o ID do equipamento: ");
    scanf("%hhu",&id);

    ( (cod >> (id-1)) & mask)?puts("Ligado"):puts("Desligado");
    ( (cod >> (id-1 + NUM_EQUIPAMENTOS)) & mask)?puts("Alto"):puts("Baixo");
    
    return 0;
    

    // if ( (cod >> (id-1)) & mask) {
    //     puts("Ligado");
    // }else {
    //     puts("Desligado");
    // }

    // if ( (cod >> (id-1 + NUM_EQUIPAMENTOS)) & mask) {
    //     puts("Alto");
    // }else {
    //     puts("Baixo");
    // }

    // return 0;

}