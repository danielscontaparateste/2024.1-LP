#include <stdio.h>
int main() {
    int i = 1;
    while(i <= 10){
        if(i == 4)
            break;
        i++; 
    }
    printf("%d \n", i);
    return 0; 
}