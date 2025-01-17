#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"
int IntTransformation(int *nums, int digits){
    int number = 0;
    for(int i = 0; i < digits - 1; i++){
        number = (number + nums[i] * pow(10, (digits - (i + 1))));
    }
    number /= 10;
    return number;
}
int main(void){
    int a = 0, c = 0;
    int *b;
    b = (int*) malloc(sizeof(int) * 1);
    while(a >= 0){
        scanf("%d", &a);
        b[c] = a;
        b = (int*) realloc(b, sizeof(int) * (c + 1));
        c++;
    }
    printf("number you typed: %d", IntTransformation(b, c));
    return 0;
}