// To calculate Area and Circumference of a circle

#define _GNU_SOURCE // USE GNU SOURCE as our header macro defaults (used for M_PI here)
#include <stdio.h>
#include <math.h>

// #define M_PI 3.14159265358979323846

int main()
{
    float radius, area, circumference;

    printf("enter radius: ");

    scanf("%f", &radius);

    area = M_PI * radius * radius;

    circumference = 2 * M_PI * radius;

    printf("Area: %f\nCircumference: %f\n", area, circumference);
}