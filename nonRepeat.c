#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
int *nonRepeat(int size){
    srand(time(NULL));
    bool x = false;
    int random;
    int *list = (int *)malloc(size * sizeof(int));
    if(list == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
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
/*int *nonRepeat(int size) {
    srand(time(NULL));
    bool x = false;
    int random;
    int *list = (int *)malloc(size * sizeof(int));
    if(list == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
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
}*/
int main(void){
    int size;
    scanf("%d", &size);
    for(int i = 0; i < size; i++){
        printf("list[%d] = %d\n", i, nonRepeat(size)[i]);
    }
    return 0;
}
/*int main() {
    int size;
    scanf("%d", &size);
    int *array = nonRepeat(size);
    if (array != NULL) {
        printf("Random array: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
        // Free the allocated memory
        free(array);
    }
    return 0;
}*/