#include <stdio.h>
#include <math.h>

int main (){
    int a, b, c, maior_x, maior_y;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    maior_x = (a+b+abs(a-b))/2;
    maior_y = (maior_x+c+abs(maior_x-c))/2;
    if(maior_y == a){
        printf("%d eh o maior\n", a);
    }
    else if (maior_y == b){
        printf("%d eh o maior\n", b);
    }
    else{
        printf("%d eh o maior\n", c);
    }
    return 0;
}
