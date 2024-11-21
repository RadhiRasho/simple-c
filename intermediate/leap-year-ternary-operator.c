// program to check for leap year using ternary operator

#include <stdio.h>

int main()
{
    int year;

    printf("Enter year for checking leap year or not: ");
    scanf("%d", &year);

    if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0)
    {
        printf("\033[32m%d\033[0m is a leap year\n", year);
    }
    else
    {
        printf("\033[31m%d\033[0m is not a leap year\n", year);
    }

    return 0;
}