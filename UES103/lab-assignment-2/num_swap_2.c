//Progran to swap 2 numbers using XOR shift.
#include <stdio.h>

int main() {
    int a = 0, b = 0;

    printf("Enter two integers space separated: ");
    scanf("%d %d", &a, &b);

    /* Logic Behind code(using Bitwise XOR): 
       Say a = 1 (01 in binary), b = 2 (10 in binary). */
    a = a ^ b; // a = 01 ^ 10 = 11 (3 in decimal)
    b = a ^ b; // b = 11 ^ 10 = 01 (1 in decimal)
    a = a ^ b; // a = 11 ^ 01 = 10 (2 in decimal)

    printf("Values after swap a: %d and b: %d\n", a, b);

    return 0;
}
