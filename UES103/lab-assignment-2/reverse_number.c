//This program takes an integer input and reverses it
#include <stdio.h>


int main()
{   
    int num = 0, rev = 0;
    printf("Enter an integer to reverse: ");
    scanf("%d", &num);

    //Reversing Logic using while loop
    while (num != 0)
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }

    printf("Reversed number: %d", rev);

    return 0;
}
