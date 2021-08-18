/*
 *Program to invert n bits from p position of x and then return x.
 *
 * @Rohit Dhiman  ID -> 1910991113
 *
 * Assignment no. -> 03 (BitsNBytes)
 *
 *15/08/2021
 *
 * Question number -> 08
 */
#include <stdio.h>
#include <stdlib.h>

int invert(int num, int pos, int no_of_bits)
{
    return num ^ (~(~0 << no_of_bits) << pos); 
}

int main()
{
    printf("Enter number, position, and number of bits respectively\n");
    int num, pos, bits;
    scanf("%d %d %d", &num, &pos, &bits);
    printf("Invert of %d with number of bits %d from position %d is = %d\n", num, bits, pos, invert(num,pos, bits));
    return 0;
}

