
#include <stdio.h>
#include"math.h"
int main(){
    int a, b ,c;
    float S;
    printf("nhap gia tri a b c : \n");
    scanf("%d %d %d", &a, &b, &c);
    S = 3 * a - pow(b, 3) + 2 * sqrt(c);
    printf("gia tri cua phuong trinh : %.2f", S);
    return 0;
}
