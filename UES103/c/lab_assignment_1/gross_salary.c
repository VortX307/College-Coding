//Program to input basic and display gross salary of a person.
#include <stdio.h>


int main()
{
    float basic = 0.0f; 
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    /*Formula used:
      gross = basic + da + ta
      ta = 12% of basic, da = 10% of basic
      gross = basic + (0.12 * basic) + (0.1 * basic)
      gross = 1.22 * basic
    */
    printf("Gross salary is: %f", (1.22f * basic)); 

    return 0;
}
