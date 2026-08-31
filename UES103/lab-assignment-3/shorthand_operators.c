//A program to demonstrate shorthand operators
#include <stdio.h>


int main()
{
    int a, b;
    printf("Enter two integers(space seperated): ");
    scanf("%d %d", &a, &b);

    int copy; //Placeholder var

    copy = a; //Assign a to copy
    copy += b; //Shorthand addition of a and b
    printf("a + b = %d \n", copy);

    copy = a;
    copy -= b; //Shorthand substraction a - b
    printf("a - b = %d \n", copy);

    copy = a;
    copy *= b; //Shorthand multiplication of a and b
    printf("a * b = %d \n", copy); 

    copy = a;
    copy /= b; //Shorthand division of a by b
    printf("a / b = %d \n", copy);

    return 0;
}
