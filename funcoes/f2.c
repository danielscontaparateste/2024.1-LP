#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    // for (int k=0; k<argc; k++){
    //     printf("%s\n", argv[k]);
    // }

    if (argc != 3){
        printf("Use:\n\t %s <num1> <num2>\n\n",argv[0]);
        exit(1);
    }

    // int r = atoi(argv[1]) + atoi(argv[2]);
    // printf("Resultado: %d\n",r);

    float r = atof(argv[1]) + atof(argv[2]);
    printf("Resultado: %.2f\n",r);


    return 0;

}