#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int *nonRepeat(int size){
    srand(time(NULL));
    int *list;
    bool x = false;
    list = malloc(sizeof(int) * size);
    if(list == NULL){
        printf("Failed to allocate memory!\n");
        return NULL;
    }
    int random;
    list[0] = rand() % size;
    for(int i = 1; i < size; i++){
        random = rand() % size;
        for(int j = 0; j < i; j++){
            if(list[j] == random){
                x = true;
                break;
            }
        }
        if(x){
            i--;
        }
        else{
            list[i] = random;
        }
        x = false;
    }
    return list;
}
int main(void){
    int size, *list;
    printf("Size of the array: ");
    scanf("%d", &size);
    list = nonRepeat(size);
    for(int i = 0; i < size; i++){
        printf("list[%d] = %d\n", i, list[i]);
    }
    return 0;
}