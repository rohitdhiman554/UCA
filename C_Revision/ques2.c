/* 
 * Print Pyramid
 * @Rohit Dhiman (1910991113),28/07/2021
 *Compilation: gcc ques2.c
 *Execution: ./a.out
 * assignment: C Foundations(question 2)
 */
#include <stdio.h>

int main()
{

    int n=5;

  for(int i=1;i<=n;i++)
  {
      for(int space=n-i-1;space>=0;space--)
      {
          printf(" ");
      }
      for(int j=0;j<i;j++)
      {
          printf("# ");
      }
      printf("\n");
  }
}

