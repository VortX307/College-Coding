//This program calculates the area of a circle
#include <stdio.h>


int main()
{
    float pi = 3.1415927f, r = 0.0f;
    printf("Enter radius of circle (decimal acceptable): ");
    scanf("%f", &r);

    printf("The area of the circle is: %f", (pi * r * r));

    return 0;
}
