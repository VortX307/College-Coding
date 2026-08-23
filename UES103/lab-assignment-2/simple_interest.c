//This program calculates the simple interest.
#include <stdio.h>


int main()
{
    double principal = 0, rate = 0, time = 0;
    printf("Enter principal amount, rate of interest (in percentage), time period (space seperated): ");
    scanf("%lf %lf %lf", &principal, &rate, &time);

    printf("Amount after Simple Interest = %lf", (principal * rate * time / 100));
    
    return 0;
}
