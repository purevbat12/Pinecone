#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"
int *arr(int a){
    int digits;
    int *arr;
    int a1 = a;
    digits = digit(a1);
    arr = malloc(sizeof(int) * (digits - 1));
    for(int j = 0; j < (digits - 1); j++){
        arr[j] = 0;
    }
    for(int i = 0; i < (digits); i++){
        arr[i] = a1 / (pow(10, (digits - (i + 1))));
        a1 = a1 - arr[i] * pow(10, (digits - (i + 1)));
    }
    return arr;
}
int main(){
    int a;
    scanf("%d", &a);
    int digits = digit(a);
    for(int i = 0; i < digits; i++){
        printf("%d\n", arr(a)[i]);
    }
    return 0;
}