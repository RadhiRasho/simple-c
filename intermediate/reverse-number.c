// program to find reverse of a number

#include <stdio.h>

int main()
{
    int number, reverse = 0;

    printf("Enter a number to reverse: ");
    scanf("%d", &number);

    while (number != 0)
    {
        reverse = reverse * 10;
        reverse = reverse + (number % 10);
        number = number / 10;
    }

    printf("Reverse of entered number is: %d\n", reverse);

    return 0;
}