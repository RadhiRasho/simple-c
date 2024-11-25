// Decrement Operator

#include <stdio.h>

int main()
{
    int a = 5, b, c;

    b = a-- - --a;
    c = --a - a--;

    printf("Value of b: %d\nValue of c: %d\n", b, c);

    return 0;
}