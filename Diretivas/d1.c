#include <stdio.h>
#define MAX 100

int main(){
#if MAX > 99
    printf("Compilado p/ matriz > que 99\n");
#elif MAX > 49
    printf("Compilado p/ matriz > que 49 e <= a 99.\n");
#else
    printf("Compilado p/ matriz < que 49. \n");
#endif
    return 0;
}