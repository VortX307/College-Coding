// this program uses common functions of the math library.
#include <stdio.h>
#include <math.h>

int main()
{
    printf("This program uses different functions from the math library \n\n");
    float angle;
    printf("Enter angle to find sin and cos of (in radians): ");
    scanf("%f", &angle);

    printf("sin of angle: %f  cos of angle: %f \n\n", sin(angle), cos(angle));

    float num;
    printf("enter number to find logarithm of (base e): ");
    scanf("%f", &num);
    printf("log of number is: %f \n\n", log(num));

    float num0;
    printf("Enter a number to find square root of: ");
    scanf("%f", &num0);
    printf("square root of the numhber is: %f \n\n", sqrt(num0));

    float base, exponent;
    printf("Enter base and exponent (space seperated)");
    scanf("%f %f", &base, &exponent);
    printf("The base raised to power exponent is: %f \n\n", pow(base, exponent));



    return 0;
}