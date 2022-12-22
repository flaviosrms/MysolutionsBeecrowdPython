#include <stdio.h>
#define n 3.14159

int main (){
    double raio, A;
    scanf("%lf",&raio);
    A = n*raio*raio;
    printf("A=%.4lf\n", A);
    return 0;
}
