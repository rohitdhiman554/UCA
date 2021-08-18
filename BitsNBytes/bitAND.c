/*
 * Program to find bitwise AND without using &.
 *
 * @Rohit Dhiman  ID -> 1910991113
 *
 * Assignment no. -> 03 (BitsNBytes)
 *
 *15/08/2021
 *
 * Question number -> 01
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int bitAND(int a, int b)
{
    return ~((~a) | (~b));
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", bitAND(x, y));
    return 0;
}
