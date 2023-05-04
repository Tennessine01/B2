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