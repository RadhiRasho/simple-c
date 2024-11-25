// To calculate Area and Circumference of a circle

#define _GNU_SOURCE // USE GNU SOURCE as our Math header macro defaults (used for M_PI here)
#include <stdio.h>
#include <math.h>

int main()
{
    float radius, area, circumference;

    printf("enter radius: ");

    scanf("%f", &radius);

    area = M_PI * radius * radius;

    circumference = 2 * M_PI * radius;

    printf("Area: %f\nCircumference: %f\n", area, circumference);
}