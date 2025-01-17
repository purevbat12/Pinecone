#include <stdio.h>
#include <stdlib.h>
int main(){
    int arr[] = {2, 4, 6, 1, 3, 5, 9, 8, 0, 7}, temp;
    for(int i = 0; i < sizeof(arr) / sizeof(int) - 1; i++){
        for(int j = 0; j < sizeof(arr) / sizeof(int) - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}