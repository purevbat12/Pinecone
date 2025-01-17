#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct foods{
    char order[25];
    int cost;
};
int main(){
    char s[] = "Cheeseburger Coke Coke Popcorn", s1[30];
    struct foods nacho = {"Nacho", 6};
    struct foods pizza = {"Pizza", 6};
    struct foods water = {"Water", 4};
    struct foods coke = {"Coke", 5};
    struct foods burger = {"Cheeseburger", 10};
    struct foods arr[] = {nacho, water, coke, burger, pizza};
    int i1 = 0, j1 = 0, k1 = 0;
    double cost = 0, n = 0.0;
    for(int i = 0; i < 4; i++){
        for(int n = 0; n < sizeof(s1) / sizeof(char); n++){
            s1[n] = 0;
        }
        k1 = 0;
        while(!(s[i1] == ' ')){
            if(s[i1] == '\0'){
                break;
            }
            s1[j1] = s[i1];
            i1++;
            j1++;
        }
        while(k1 < 4){
            if(strcmp(arr[k1].order, s1) == 0){
                printf("Matched with %s! added %d\n", s1, arr[k1].cost);
                break;
            }
            else{
                n += 0.0625;
            }
            k1++;
        }
        if(n > 0){
            printf("True\n");
            //cost += arr[2].cost;
        }
        else{
            cost += arr[k1].cost;
        }
        j1 = 0;
        i1++;
    }
    printf("cost: %lf\n", cost);
    printf("%.2lf", cost + (cost * 7) / 100);
    return 0;
}