#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int *exa;
    exa = malloc(sizeof(int) * 5);
    for(int i = 0; i < 5; i++){
        *(exa + i) = pow((i + 1), 2);
        //exa += 1;
    }
    for(int i = 0; i < 5; i++){
        printf("exa[%i] = %i\n", i, exa[i]);
    }
    return 0;
}