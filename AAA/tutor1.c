/* Ex.2 Here is the online C complier to run C program online
the comments longer than 2 lines ( dùng dấu * và / để gõ comment nhiều dòng, / / chỉ gõ cmt 1 dòng )*/

// bài 1
#include <stdio.h> // standard input output

int main(){
    // Write C code here
    printf("hello USTH \nMy name is Luong Khoi Nguyen \" \' \? ");

    // \n để bắt đầu 1 dòng mới (xuống dòng), \" \' \? \\ dùng \ để in ra các kí tự đặc biệt)
    return 3;
}

// bài 2
#include <stdio.h>
int main(){
    printf("\"This\'s our programing course\". \n\"Welcome to the first tutorial class\".\n\"Happy new school year!\".");
return 0;
}
// bài 3
#include <stdio.h>
int main() {
    float pi=3.14, radius, area, cir; //declere the variable
    printf("please type your radius: %.2f m ", radius);
    // scanf để lấy bất kì giá trị nào nhập vào màn hình, dấu & để gán giá trị vừa nhập cho biến đằng sau nó
    scanf("%.2f", &radius);
    area = radius * radius * pi;
    cir = 2 * radius * pi;
    // %f là để in giá trị ra màn hình có kiểu dữ liệu là float
    printf("The area of the circle is: %.2f m2 \n", area ); 
    printf("The circumference of the circle is: %.2f m \n", cir);
// return 0 là kêt thúc chương trình và lặp lại 0 lần
    return 0;
}

/* bài 4: Write a C program to calculate a value of a polynomial a*x*x + b*x + c
with three known constant parameters a=25, b=2, and c=3 and the variable x input
from the keyboard */
#include <stdio.h>
int main() {
    int a = 25, b = 2, c = 3;
    float x, result;
    printf("Please input your x value \n");
    scanf("%2f", &x);
    result = a*x*x + b*x + c;
    printf("The result of equation is: %2f",    result);
    return 0;
}

/* bài 5: Use math functions in C standard library to calculate a value of the following expression
 3a -b3 - can2 c wuth three parameters a, b, c input from the keyboard */
#include <stdio.h> // declere the function stand for standard input output
#include <math.h>
int main() {
    float a, b, c, results;
    printf("please input a value: \n");
    scanf("%f", &a);
    printf("please input b value: \n");
    scanf("%f", &b);
    printf("please input c value: \n");
    scanf("%f", &c);
    // pow(b,3) nghĩa là b mũ 3 
    results = 3*a - pow(b,3) - 2*sqrt(c);
    printf("The value of the equation is: %f", results);
    return 0;
}

// bài 4 Hữu Đức:
#include<stdio.h>
int main() {
    int A=25, b=2, c=3;
    float x, result;
    printf("We have axx+bx+c With a=25, b=2, c=3 \n");
    printf("Please input your x value, we will give you the answer: \n");
    scanf("%f",&x);
    result=A*x*x+b*x+c;
    printf("The result of the eqation is: %f", result);
    return 0;
}

// bài 6 
#include "increase_element.h"
#include <stdio.h>
int main()
{
    int A[] = {3, 5, 6, 8, 9, 2, 1, 3, 1, 2};
    int size = 10;
    //int*B = increase_element(A, size)

    float* avg = compute_average
return  0;
}

