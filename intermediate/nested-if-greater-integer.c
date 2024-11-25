// Greatest numbrr using nested if

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter three integer numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("A is greatest\n");
        }
        else
        {
            printf("C is greatest\n");
        }
    }
    else if (b > c)
    {
        printf("B is greatest\n");
    }
    else
    {
        printf("C is greatest\n");
    }

    return 0;
}