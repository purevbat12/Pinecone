#include <stdio.h>
int Digit(int x);
int main(int argc, char **argv){
    int a;
    scanf("%d", &a);
    printf("The amount of digit: %d", Digit(a));
    return 0;
}
int Digit(int x){
    int b = 0, a1 = x;
    while(a1 > 0){
        a1 = a1 / 10;
        b++;
    }
    return b;
}