#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
typedef struct number{
    int val;
    struct number *next;
} number;
int main(){
    number l1;
    l1.next = malloc(sizeof(struct number));
    scanf("%d", &l1.val);
    scanf("%d", &l1.next->val);
    int temp[3], temp1[3];
    int num1 = l1.val, num2 = l1.next->val, temp2 = sizeof(temp) / sizeof(int), j = 0;
    int t1 = num1, t2 = num2;
    for(int i = temp2; i > 0 ; i--){
        num1 = t1 / pow(10, (i - 1));
        num2 = t2 / pow(10, (i - 1));
        t1 -= (pow(10, (i - 1)) * num1);
        t2 -= (pow(10, (i - 1)) * num2);
        temp[j] = num1;
        temp1[j] = num2;
        j++;
    }
    num1 = 0;
    num2 = 0;
    j = 0;
    for(int i = temp2; i > 0; i--){
        num1 += temp[i - 1] * pow(10, (i - 1));
        num2 += temp1[i - 1] * pow(10, (i - 1));
    }
    printf("num1 = %d\nnum2 = %d\nnum1 + num2 = %d", num1, num2, num1 + num2);
    return 0;
}