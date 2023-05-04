// Exercise 1: write a C program to convert a temprature from Centigrade to Fahrênhigh ( fah=cen*9/5 +32)
#include <stdio.h>
int main(){
    float cen, fah;
    printf("please type your temprature in centigrade: \n");
    scanf("%f", &cen);
    fah = cen*9/5 + 32;
    printf("temprature of %.2f centigrade is %.2f in fah", cen, fah);
    return 0;
}

// cách 2 sử dụng function
#include <stdio.h>
float convertCtoF(float cen){
    return (cen*9/5 +32);
}
int main(){
    float cen, fah;
    printf("please type your temprature in centigrade: \n");
    scanf("%f", &cen);
    fah = convertCtoF(cen);
    printf("temprature of %.3f centigrade is %.3f in fah", cen, fah);
    return 0;
}
//Exercise 2: tìm giá trị lớn nhất trong a,b,c
#include <stdio.h>
int main()
{
    float a, b, c;
    printf("please type your number: \n");
    scanf("%f %f %f", &a, &b, &c);
    if (a >= b && a >= c)
    {
        printf("\nMaximum of all three numbers is %f",a);
        if (b >= c)
        printf("\nMinimum of all three numbers is %f",c);
        else
        printf("b = %f is the minimum",b);
    }
    if (b >= a && b >= c)
    {
        printf("\nMaximum of all three numbers is %f",b);
        if (a >= c)
        printf("\nMinimum of all three numbers is %f",c);
        else
        printf("a = %f is the minimum",a);
    }
    if (c >= b && c >= a)
    {
        printf("\nMaximum of all three numbers is %f",c);
        if (b >= a)
        printf("\nMinimum of all three numbers is %f",a);
        else
        printf("b = %f is the minimum",b);
    } 
    return 0;
}


// Exercise 3: write a C program to swap the values of two variale without using a third one. (before swapping a=30, b=80, after a=80, b=30)
#include <stdio.h>
int main(){
    int a=30, b=80;
    printf("Before swapping a = %d, b = %d",a,b);
    a = b - a;
    b = b - a;
    a = a + b;
    printf("\nAfter swappping a = %d, b = %d",a,b);
return 0;
}

/* Ex4: Enter a year in the format of Gregorlan calendar and check if it is a leap year or not
Leap years refers to years divisible by 4 or 400 but not by 100) */
#include <stdio.h>
int main(){
    int year;
    printf("please input a year in number \n");
    scanf("%d", &year);
if (year % 4 ==0){
    if (year % 100 == 0){
        if (year % 400 == 0)
            printf(" The year %d is a leap year\n", year);
        else
            printf("The year %d is not a leap year \n", year);
        }
    else
        printf("The year %d is a leap year \n", year);
    }
else
    printf("The year %d is not a leap year\n", year);
return 0;
}

/* Ex5: Write a C program to solve a system of linear equations with two variables 
ax+by=c and dx+ey=f with the parameters a,b,c,d,e,f in put from the keyboard
#include <stdio.h> */
int main()
{
    float a, b, c, d, e, f, x, y, det;
        printf("please type input a b c coeficient: \n");
        scanf("%f %f %f", &a, &b, &c);
        printf("please type input d e f coeficient: \n");
        scanf("%f %f %f", &d, &e, &f);
    det = a*e-b*d;
    if (det != 0)
    
        {   x = (c*e-f*b)/det;
            y = (a*f-c*d)/det;
            printf("x = %.3f and y = %.3f", x, y);
        }
    else
        { printf ("There is an infinite result or no solution for this equation");
        }
    return 0;
}

//Ex6:
#include <stdio.h>
int main()
{
    int month;
        printf("Input a month in numerical format\n");
        scanf("%d", &month);
    switch (month)
    {
    case 1:
    case 3:
    case 5://constant-expression 
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\nThis month has 31 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\nThis month has 30 days");
        break;
    case 2:
        printf("\nThis month has 28 or 29 days");
    default:
        printf("Please input valid number 1-12");
        break;
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int n;
    int i;
    int temp=0;
    printf("moi nhap gia tri cua n: ");
    scanf("%d", n);
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            temp = temp + 1;
        }
    }
    if(temp != 0)
        printf("%d khong phai la so nguyen to", n);
    else
        printf("%d la so nguyen to",n);
    return 0;
}