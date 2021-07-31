  
/* 
 * Swap to numbers without using third variable
 * @Rohit Dhiman (1910991113),28/07/2021
 * assignment: C Foundations(question 1)
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

