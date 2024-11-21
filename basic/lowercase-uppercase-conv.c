// Lowercase to UPPERCASE character conversion and visa versa

#include <stdio.h>

int main()
{
    char character;

    int no;

    printf("Enter character to convert: ");
    scanf("%c", &character);

    if (character > 64 && character < 91)
    {
        no = character + 32;

        printf("Letter in lowercase: %c\n", no);
    }

    if (character > 96)
    {
        no = character - 32;

        printf("Letter in UPPERCASE: %c\n", no);
    }

    return 0;
}