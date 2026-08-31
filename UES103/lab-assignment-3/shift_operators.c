//Program to understand bitwise shift operators.
#include <stdio.h>


int main()
{
    int num, shift;

    printf("Enter number and shift value (space seperated): ");
    scanf("%d %d", &num, &shift);

    printf("Using right shift: %d \n", num >> shift); //Same as num / (2 ^ shift)
    printf("Using left shift: %d", num << shift); //Same as num * (2 ^ shift)

    return 0;
}