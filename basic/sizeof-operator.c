// sizeof() operator in C is used to calculate the size of a variable
// used inside the program and return the size in integer in the form
// of memeory bytes

#include <stdio.h>

int main()
{
    int a = 5;
    char character = 'X';

    printf("Size of a: %d Bytes\n", sizeof(a));
    printf("Size of X: %d Bytes\n", sizeof(character));

    return 0;
}