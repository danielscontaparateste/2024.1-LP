#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct coord{
    int x;
    int y;
};

void calcularDistancia(struct coord, struct coord, float *const);

int main(int argc, char **argv){
    struct coord c1, c2;

    if (argc!=5){
        printf("Formato:\n\t\t %s <x1> <y1> <x2> <y2>\n\n",*argv);
        exit(1);
    }    

    c1.x = atoi(*(argv+1));
    c1.y = atoi(*(argv+2));
    
    c2.x = atoi(*(argv+3));
    c2.y = atoi(*(argv+4));

    // float distancia =  sqrt(pow(c2.x - c1.x, 2) + pow(c2.y - c1.y, 2));
    float distancia;
    calcularDistancia(c1, c2, &distancia);

    printf("Distância entre os pontos c1(%d, %d) e c2(%d, %d): %.2f\n",c1.x, c1.y, c2.x, c2.y, distancia);

    return 0;

}

void calcularDistancia(struct coord a, struct coord b, float *const pd){
    *pd =  sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}
