// Program to check type of input character

#include <stdio.h>

int main()
{
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    if ((character >= 65 && character <= 90) || (character >= 97 && character <= 122))
    {
        printf("Entered character is an alphabet \n");
    }
    else if (character >= 48 && character <= 57)
    {
        printf("Entered character is a digit\n");
    }
    else
    {
        printf("Entered character is a special symbol\n");
    }

    return 0;
}