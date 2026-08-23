//This program calculates the compound interest
#include <stdio.h>
#include <math.h> //To use pow function for easy exponentiation


int main()
{
    double principal = 0.0, rate = 0.0, time = 0.0;
    printf("Enter principal amount, rate of interest (percentage), time period space seperated: ");
    scanf("%lf %lf %lf", &principal, &rate, &time);
    
    printf("Compunded amount is: %lf", (principal * pow(1 + (rate / 100), time))); //Use pow function from math library for compounding. Also do not forget to normalize rate

    return 0;
}
