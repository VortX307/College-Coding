//This is a program that uses the ternary operator to find if the given number is even or odd.
#include <stdio.h>


int main()
{
    int num;
    printf("Enter a number (integer): ");
    scanf("%d", &num);

    //Using ternary operator to check wether the given number is odd or even
    num % 2 == 0?printf("Number is even"):printf("Number is odd"); //syntax: condition ? <if_true> : <if_false>; 


    return 0;
}
