/*
 * Implement Tower of hanoi contains three Tower's names(A,B,C).A==from where we took disc,B==helping tower,C==from where we place disc 
 *
 * @RohitDhiman 1910991113
 *
 * Assignment=05 
 *
 *05/ 08/ 2021
 
 *Compilation: gcc toh.c
 * Execution: ./a.out
 */

#include <stdio.h>
int count=0;//globally declare count to count number of moves required
void TOH(int n,char A,char B,char C)
{
    
    if(n>0)
    {
        count++;
        TOH(n-1,A,C,B);
        printf("%c to %c\n",A,C);// move disc from A Tower To C Tower
        TOH(n-1,B,A,C);
        
    }
   
}

int main()
{
    int n=3;//number of discs
    TOH(n,'A','B','C');//calling function
     printf("Total Movement Required=%d",count);
    

    return 0;
}

