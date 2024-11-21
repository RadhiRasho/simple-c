// Program to calculate simple interest

#include <stdio.h>

int main()
{
    float principleAmount, rate, time, simpleInterest;

    printf("Enter Principal Amount, Rate of interest and Time Respectively: ");
    scanf("%f %f %f", &principleAmount, &rate, &time);

    simpleInterest = (principleAmount * rate * time) / 100;

    printf("Simple Interest is: %f", simpleInterest);

    return 0;
}