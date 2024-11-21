// Fahrenheit to celcius temp converter and visa versa

#include <stdio.h>

int main()
{
    float fahrenheit, celcius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celcius = (fahrenheit - 32) * 5 / 9;

    printf("Temperature in Celcius is: %f\n\n", celcius);

    printf("Enter temperature in Celcius: ");
    scanf("%f", &celcius);

    fahrenheit = (9 / 5) * (celcius + 32);

    printf("Temperature in Fahrenheit: %f", fahrenheit);

    return 0;
}