/*Write each function to do following tasks and test them in the main function

- Calculate area and circumference of a circle with a the radius as the parameter.

- calculate a value of a polynomial ax^4 + bx^2 + c where a,b,c, and x are parameters.

- swap the value of two variables, the parameters must be pointers.*/

#include<stdio.h>
#include<math.h>

float PI = 3.14;
float area(int r) {
    return r * r * PI;
}
float chu_vi(int r) 
{
    return 2 * PI * r;
}
float tinh_gia_tri(float a, float b, float  c, float x) 
{    
    return a * pow(x, 4) + b * pow(x, 2) + c;  
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
	int n;
    int x;
    printf("Please type the value of x and n: ");
    scanf("%d", &x);
	scanf("%d", &n);
	float A = area(n);
	printf("\nArea of the circle is: %.2f", A);
    float C = chu_vi(n);
    printf("\nCurcumstance of the circle is: %.2f", C);
	float j,q,k;
    printf("\nplease type the value of a,b,c: ");
    scanf("%f %f %f", &j,&q,&k);
	printf("\nvalue of a polynomial: %.2f", tinh_gia_tri(j, q, k, x));
    int a = n;
    int b = x;
    swap(&n, &x);
    printf("\nvalue of n and x after swap: ");
    printf("\nn: %d", n);
    printf("\nx: %d", x);
    
}

/*Write a C program to:

- ask users to enter 10 integers and store them in a static array

- print out the list of numbers in the reversed order of the other user entered,

- print out the list of even number,

- show the minimum and maximum number */

#include <stdio.h>
int main()
{
    int a;
    printf("Please type the size of array: \n");
    scanf("%d", &a);
    int arr[a];
    printf("The array is:");
    for(int i = 0; i <= a - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array after reverse: ");
    for(int i = a - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    float total = 0;
    for(int i = 0; i <= a - 1; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
        total += arr[i];
    }
    printf("Even number are: ");
    for (int i = 0; i <= a - 1; i++)
    {
        if (arr[i] % 2 == 0)
        printf("%d ", arr[i]);
    }
    printf("\nmax value is: %d\n", max);
    printf("min value is: %d\n", min);
    printf("average is: %f", total/a);
    return 0;
}



/* Write program to ask the user to enter his/her name, then count the total words and characters in a string*/
#include<stdio.h>
#include<string.h>
int main() {
	char c[100];
    printf("moi nhap ten: ");
	scanf("%[^\n]", c);
	int len = strlen(c);
	char res[100];
	int count = 0;
	int dau = 0;
	int cuoi = 0;
	// gan dau la stt ki tu dau tien la chu
	for (int i = 0; i < len; i++) {
		if (c[i] != ' ') {
		    dau = i;
		    break;
		}
	}
	// gan cuoi la stt ki tu cuoi cung la chu
	for (int i = len - 1; i >= 0; i--) {
	    if (c[i] != ' ') {
	        cuoi = i;
	        break;
	    }
	}
	int so_tu = 1;
	int so_ki_tu = 0;
	for (int i = dau; i <= cuoi; i++) {
	    if (dau == cuoi && c[i] == ' ') {
	        so_tu = 0;
	        break;
	        // neu dau = cuoi va c[dau] != ' ' thi do la 1 ki tu 
	    } else if (dau == cuoi) {
	        so_tu = 1;
	        so_ki_tu = 1;
	        break;
	        // neu dau bang cuoi va c[dau] == ''
	    }
	    if (c[i] != ' ')
	        // dem so ki tu
	        so_ki_tu++;
	    if (i > dau && c[i] != ' ' && c[i-1] == ' ') {
	        so_tu++;
	        // dem so tu phai la truong hop i > dau vi neu i = 0 thi c[i-1] = c[-1] thi sai
	    }
	}
	printf("So tu: %d \nSo ki tu: %d", so_tu, so_ki_tu);
}

/*Write a C recursive function accepting a positive integer number and calculate n! (factorial) of the input parameter.
Write another similar function but using non-recursive format:
Then write the main function to test the previous functions
The code should be organized property into separated file*/
#include<stdio.h>
int recursive_factorial(int n) {
    if (n > 0)
        return n * recursive_factorial(n-1);
    return 1;
    
}
int main() {
	int n;
    printf("moi nhap gia tri n : ");
	scanf("%d", &n);
	
	printf("%d", recursive_factorial(n));
    
}


#include <stdio.h>
int main() {
	int n;
    printf("moi nhap gia tri cua n: ");
	scanf("%d", &n);
	int res = 1;
	for (int i = 1; i <= n; i++) {
	    res *= i;
	}
	printf("%d", res);
    
} 




