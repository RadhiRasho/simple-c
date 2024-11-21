// Finding given number is odd or even using bitwise AND(&) operator
// Checking the least Significant bit, if 0 print Even, otherwise print Odd

#include <stdio.h>

int main()
{
    int num, mask = 0x2;

    printf("Enter a number: ");
    scanf("%d", &num);

    num &= mask;

    if (0 == num)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }

    return 0;
}