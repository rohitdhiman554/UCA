/*
 *Program to find bang without !.
 *
 * @Rohit Dhiman  ID -> 1910991113
 *
 * Assignment no. -> 03 (BitsNBytes)
 *
 *15/08/2021
 *
 * Question number -> 07
 */
#include <stdio.h>

int invert(int x)
{
    int invx = ~x; 
    int opp = invx + 1;
    return (( ~opp & invx) >> 31) & 1;
}

int main()
{
    int x;
    printf("Enter the number:\n");
    scanf("%d", &x);
    
    printf("!%d = %d\n",x, invert(x));
    return 0;
}

