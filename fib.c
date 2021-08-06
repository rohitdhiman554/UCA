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
    if(n==0)//base condition
    return 0;
    
    if(n==1||n==2)//base condition
    return 1;
    
    return fib(n-1)+fib(n-2);
    
}


int main()
{
   int n=3;//n defines how many times we have to print third element of fibonacci series.
   int arr[20];//Example (array having size 20 to show fibonacci series upto 20 elements.)
   int len=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<len;i++)
   {
       arr[i]=fib(i);
   }
   
   printf("\n");
   for(int i=0;i<n;i++)//loop to print n times every third element of series.
   {
       printf("%d ",arr[i*n+3]);
   }
    return 0;
}
