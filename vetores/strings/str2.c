#include <stdio.h>
#include <string.h>

#define TAM 10

int main(){
    char str[TAM];
    char ch;
    
    /* ==== Entrada de Dados ====*/
    puts("Forneça uma string: ");
    fgets(str, TAM, stdin);
    // gets(str);
    // scanf("%[^\n]s",str);

    // Solução incompleta - exercício casa - testar com string menor que o tamanho da string.
    while (getchar()!='\n'); // Tratar possível excesso de caracteres no buffer

    puts("Entre com o caractere a ser buscado: ");
    ch = getchar();

    /* ==== Processamento ====*/

    puts("==== Processamento ====");
    printf("String de entrada: %s\n", str);
    printf("Caractere a ser buscado: %c\n\n", ch);

    int k=0;
    int seEncontrou = 0;
    while(str[k]!='\0'){
        if (str[k]==ch){
            seEncontrou = 1;
            break;
        }
        k++;
    }

    /* ==== Saída ====*/
    puts("==== Saída ====");
    (seEncontrou)?printf("\t\t %c existe em %s\n",ch,str):printf("\t\t %c não existe em %s\n",ch, str);

    return 0;
}