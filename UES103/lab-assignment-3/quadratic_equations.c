//A program to find the roots of a quadratic equation for the case D > 0.
#include <stdio.h>
#include <math.h>


int main()
{
    float a, b, c;
    printf("Enter a, b, c for the genral quadratic equation ax^2 + bx + c = 0 (space seperated), D > 0: ");
    scanf("%f %f %f", &a, &b, &c);

    float discrim = (b * b) - (4 * a * c);
    float x1 = ((-1 * b) + sqrt(discrim)) / (2 * a);  
    float x2 = ((-1 * b) - sqrt(discrim)) / (2 * a);

    printf("The roots of the equation are: %f and %f", x1, x2);

    return 0;
}
