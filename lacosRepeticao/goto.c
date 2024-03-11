#include <stdio.h>

int main(){
    int x = 1;
    loop1:
        x++;
    if(x < 100){
        printf("%d\n",x);
        goto loop1;
    }    
    return 0;

}