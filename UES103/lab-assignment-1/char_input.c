//Program to input a charachter and then display it.
#include <stdio.h>


int main()
{
    printf("Enter a single charachter: \n"); // \n is escape sequence for new line. Can be skipped.
    char ch = ' ';
    scanf("%c", &ch);
    printf("The charachter entered is: %c", ch);

    return 0;
}
