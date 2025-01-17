#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int size = 0;
    printf("Enter the amount of letters in the string: ");
    scanf("%d", &size);
    char *str = malloc(sizeof(char) * size), word[] = "pinecone";
    while(getchar() != '\n');
    printf("Enter the string with the size of %d: ", size);
    gets(str);
    int a = 0;
    while(a == 0){
        for(int i = 0; i < sizeof(word) / sizeof(char) - 1; i++){
            for(int j = 0; j < size; j++){
                if(word[i] == str[j]){
                    a = 1;
                }
            }
        }
        break;
    }
    if(a == 1){
        printf("pineconed");
    }
    else{
        printf("isn't included");
    }
    return 0;
}