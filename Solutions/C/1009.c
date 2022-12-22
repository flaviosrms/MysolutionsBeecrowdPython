#include <stdio.h>

int main (){
    char nome [50];
    double sf, v;
    scanf(" %s", &nome);
    scanf("%lf", &sf);
    scanf("%lf", &v);
    double t = sf + (0.15*v);
    printf("TOTAL = R$ %.2lf\n", t);
    return 0;
}
