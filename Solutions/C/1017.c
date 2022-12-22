#include <stdio.h>

int main (){
    int H, Vavg;
    scanf("%d", &H);
    scanf("%d", &Vavg);
    int Km = H * Vavg;
    float L = Km/12.0;
    printf("%.3f\n", L);
    return 0;
}
