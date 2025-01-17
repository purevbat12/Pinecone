#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    char a[25];
    get(a, 25, stdin);
    printf("'%s' has amount of letters %d", a, sizeof(a));
    return 0;
}