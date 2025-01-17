#include <stdio.h>
#include <stdlib.h>
int a(int p, int a1, int d){
    int an = a1 + (p - 1) * d;
    return an;
}
int main(){
    int *set1, *set2, size, *intersection = NULL, n = 0;
    int a1 = 17, b1 = 16, d1 = 4, d2 = 5;
    printf("Size: ");
    scanf("%d", &size);
    set1 = malloc(sizeof(int) * size);
    set2 = malloc(sizeof(int) * size);
    for(int i = 1; i <= size; i++){
        *(set1 + (i - 1)) = a(i, a1, d1);
        *(set2 + (i - 1)) = a(i, b1, d2);
    }
    printf("Set1 = {");
    for(int i = 0; i < size; i++){
        printf("%i%c", *(set1 + i), i == size - 1 ? ' ' : ',');
    }
    printf("}\n");
    printf("Set2 = {");
    for(int i = 0; i < size; i++){
        printf("%i%c", *(set2 + i), i == size - 1 ? ' ' : ',');
    }
    printf("}\n");
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(set1[i] == set2[j]){
                n++;
                printf("%d == %d\n", set1[i], set2[j]);
                intersection = realloc(intersection, sizeof(int) * n);
                if(intersection == NULL){
                    printf("Memory allocation failed!\n");
                    free(set1);
                    free(set2);
                    return 1;
                }
                intersection[n - 1] = set1[i];
            } 
            else{
                printf("%d != %d\n", set1[i], set2[j]);
            }
        }
    }
    free(set1);
    free(set2);
    printf("Number of members in the intersection set: %i\n", n);
    printf("Intersection set = {");
    for(int i = 0; i < n; i++){
        printf("%i%c", *(intersection + i), i == n - 1 ? ' ' : ',');
    }
    printf("}\n");
    free(intersection);
    return 0;
}
