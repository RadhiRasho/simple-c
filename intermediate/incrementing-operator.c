// Incrementing Operator

#include <stdio.h>

int main()
{
    int a = 5, b, c;

    b = a++ + ++a;
    c = ++a + a++;

    printf("Values: \nb: %d\nc: %d\n", b, c);
    return 0;
}