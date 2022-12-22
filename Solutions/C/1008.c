#include <stdio.h>

int main (){
    int num, H;
    float VpH;
    scanf("%d", &num);
    scanf("%d", &H);
    scanf("%f", &VpH);
    float S = H * VpH;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", S);
    return 0;
}
