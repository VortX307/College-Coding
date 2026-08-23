//Program to add, substract and multiply two numbers.
#include <stdio.h>


int main()
{
    int a = 0, b = 0; //Intialize two integers in same statement using ,
    printf("Enter two integers (space seperated): ");
    scanf("%d %d", &a, &b); //Chaining inputs by specifying types of all inputs followed by their memory location. Comma .seperated
    printf("\nSum of the numbers is: %d", (a+b));
    printf("\nDifference of the two numbers is: %d", (a-b)); //NOTE: Will provide negative answers if b > a
    printf("\nProduct of the two numbers is: %d", (a*b));

    return 0;
}
