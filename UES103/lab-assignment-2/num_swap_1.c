//Program to swap two numbers using a third temp variable
#include <stdio.h>


int main()
{
    int c = 0, d = 0, temp = 0;
    printf("Enter two integers(space seperated): ");
    scanf("%d %d", &c, &d);

    //Prinitng initial values of c and d.
    printf("Initial valus: \n");
    printf("c: %d\n", c);
    printf("d: %d", d);
    printf("\n"); //Newline

    //Swap logic
    temp = c; //Storing the value of c in a temp variable.
    c = d; //Changing c to d
    d = temp; //Changing d to temp (orignal value of c) because c is already swapped.

    //Printing swapped values of c and d
    printf("Swapped Values: \n");
    printf("c: %d\n", c);
    printf("d: %d", d);


    return 0;
}
