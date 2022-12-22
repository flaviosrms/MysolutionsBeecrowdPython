#include <stdio.h>

int main (){
    int c[2], n[2];
    float v[2];
    for(int i=0; i<2; i++){
        scanf("%d", &c[i]);
        scanf("%d", &n[i]);
        scanf("%f", &v[i]);
    }
    float t = (n[0]*v[0]) + (n[1]*v[1]);
    printf("VALOR A PAGAR: R$ %.2f\n", t);
    return 0;
}
