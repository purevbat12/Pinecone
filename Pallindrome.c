#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int IntTransformation(int *nums, int digits);
int digit(int x);
int IntTransformation(int *nums, int digits){
    int number = 0;
    for(int i = 0; i < digits - 1; i++){
        number = (number + nums[i] * pow(10, (digits - (i + 1))));
    }
    number /= 10;
    return number;
}
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
int digit(int x){
    int b = 0, a1 = x;
    while(a1 > 0){
        a1 = a1 / 10;
        b++;
    }
    return b;
}
bool pallindrome(int x){
    int *array, *array1, num1, num2;
    int digits = digit(x);
    array = malloc(sizeof(int) * digits);
    array1 = malloc(sizeof(int) * digits);
    for(int i = 0; i < digits; i++){
        array[i] = arr(x)[i];
    }
    for(int j = 0; j < digits; j++){
        array1[j] = array[digits - (j + 1)];
    }
    num1 = IntTransformation(array, digits + 1);
    num2 = IntTransformation(array1, digits + 1);
    return num1 == num2 ? 1 : 0;
}
int main(void){
    int a;
    scanf("%d", &a);
    printf("%d", pallindrome(a));
    return 0;
}