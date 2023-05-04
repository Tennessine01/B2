// Excersise 1: write a function in C to find the greastest common divisor (gcd)(ước chung lớn nhất) of two number 
#include <stdio.h>
#include"gcd.h"
int main()
{
    int x, y;
    printf("Insert two number \n");
    scanf("%d %d", &x, &y);
    int A = greatest_com_div(x, y); // cho biến x y vừa nhập vào hàm gcd 
    // sau đó hàm sẽ trả lại kết quả ra biến gre_com_div vừa gán
    printf("The greatest divisor of two number is: %d", A);
return 0;
}

// Excersise 2: 