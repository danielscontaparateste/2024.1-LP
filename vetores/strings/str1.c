#include <stdio.h>
#include <string.h>

#define TAM 10

int main(){
    // char str[TAM];
    char str[]="Daniel Silva Ferreira";
    // char str[] = {'D','a','n','\0'};

    // gets(str);
    // fgets(str, TAM, stdin);
    // scanf("%[^\n]s",str);

    printf("%s\n", str);

    puts("====");

    // for (int k=0; k<TAM; k++){
    //     printf("%d\n",str[k]);
    // }

    for (int k=0; k<strlen(str); k++){
        printf("%d\n",str[k]);
    }

    puts("====");
    printf("Quantidade de caracteres: %lu\n",strlen(str));

    return 0;
}