/*
 * Program to print n times every third element of fibonacci series.
 *
 * @Rohit Dhiman  ID -> 1910991113
 *
 * Assignment=05 
 *
 *05/ 08/ 2021
 
 *Compilation: gcc fib.c
 * Execution: ./a.out
 */

#include <stdio.h>
int fib(int n)
{
    if(n==0)
    return 0;
    
    if(n==1||n==2)
    return 1;
    
    return fib(n-1)+fib(n-2);
    
}


int main()
{
   int n=3;
   int arr[20];
   int len=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<len;i++)
   {
       arr[i]=fib(i);
   }
   
   printf("\n");
   for(int i=0;i<n;i++)
   {
       printf("%d ",arr[i*n+3]);
   }
    return 0;
}
