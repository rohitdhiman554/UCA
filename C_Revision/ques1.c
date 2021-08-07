/* 
 * Swap to numbers without using third variable
 * @Rohit Dhiman (1910991113),28/07/2021
 * Compilation: gcc ques1.c  
 * Execution: ./a.out
 * assignment: C Foundations(question 1)
 */
#include <stdio.h>
void swap(int *x,int *y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;

}
int main()
{
	int x=10,y=20; printf("Before Swap x=%d,y=%d\n",x,y);
	swap(&x,&y);

	printf("After Swap x=%d,y=%d",x,y);


	return 0;
}
