#include <stdio.h>

int main(){

    for (int k=0; k < 3; k++){
        for (int z=0; z<9; z+=3){
            for (int j = 0; j < 3; j++){
                printf("%d - %d\n",j,j+z);
            }
        }
    }   

    return 0; 

}