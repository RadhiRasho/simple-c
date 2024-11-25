// Program to input a character and check whether it is a vowel or consonant using switch case

#include <stdio.h>

int main()
{
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    switch (character)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'Y':
        printf("Entered character is a vowel \n");
        break;
    default:
        printf("Entered character is a consonant\n");
        break;
    }

    return 0;
}