#include <stdio.h>
#define pi 3.14159

int main (){
    double A, B, C, area_ret, circ, trap, quad, ret;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    area_ret = A*C/2.0;
    circ = pi * C * C;
    trap = (A+B)*C/2.0;
    quad = B*B;
    ret = A*B;
    printf("TRIANGULO: %.3lf\n", area_ret);
    printf("CIRCULO: %.3lf\n", circ);
    printf("TRAPEZIO: %.3lf\n", trap);
    printf("QUADRADO: %.3lf\n", quad);
    printf("RETANGULO: %.3lf\n", ret);
    return 0;
}
