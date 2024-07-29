#include <stdio.h>

int main(){
    int r, x, y;
    int *pr = NULL, *px = NULL, *py = NULL; // int *pr = &r;
    int **ppx = NULL;

    pr = &r;
    px = &x;
    py = &y;

    ppx = &px;

    puts("Digite o primeiro valor:");
    scanf("%d",px);

    puts("Digite o segundo valor:");
    scanf("%d",py);

    *pr = *px + *py;

    printf("[%p] %d + [%p] %d = [%p] %d\n\n",px, *px, py, *py, pr, *pr);

    printf("[%p] %d + [%p] %d = [%p] %d\n\n",ppx, **ppx, py, *py, pr, *pr);

    return 0;


}