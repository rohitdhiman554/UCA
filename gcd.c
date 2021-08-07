/*
 * Program to find GCD of two numbers using recursion
 *
 * @RohitDhiman 1910991113
 *
 * Assignment=05 
 *
 *05/ 08/ 2021
 
 *Compilation: gcc gcd.c
 * Execution: ./a.out
 */

#include <stdio.h>
int gcd(int n1,int n2)
{
    if(n1==0)//if n1=0 then return n2
    return n2;
    if(n2==0)//if n2=0 then return n1
    return n1;
    if(n1==n2)
    return n1;
    
    if(n1>n2)
   return gcd(n1-n2,n2);//remove n1 from n2 if n1 is greater
   return gcd(n1,n2-n1);//remove n2 from n1 if n2 is greater
}


int main()
{
int n1=153;
int n2=81;
printf("%d ",gcd(n1,n2));

}
