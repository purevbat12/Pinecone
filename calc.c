#include <stdio.h>
#include <math.h>
#define c 2.998 * pow(10, 8)
#define h 6.626 * pow(10, -34)
#define Rh 1.097 * pow(10, 7)
int main(){
    double z = 3.0, n1 = 1.0, n2 = 2.0, E1, E2;
    E1 = (pow(z, 2) * Rh * h * c) / pow(n1, 2);
    E2 = (pow(z, 2) * Rh * h * c) / pow(n2, 2);
    printf("%.20lf - %.20lf = %.20lf\n", E1, E2, E1 - E2);
    return 0;
}