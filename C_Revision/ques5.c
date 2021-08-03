/* 
 * Matrix Multiplication
 * @Rohit Dhiman (1910991113),28/07/2021
 * assignment: C Foundations(question 5)
 */
#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the number of rows and columns for matrix 1");
	scanf("%d %d",&a,&b);
	int mat1[a][b];
	printf("Enter values in matrix");
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}


	int c,d;
	printf("Enter the number of rows and columns for matrix 2");
	scanf("%d %d",&c,&d);
	int mat2[c][d];
	printf("Enter values in matrix");
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<d;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}



	int res[a][d],sum=0;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<d;j++)
		{
			res[i][j]=0;
		}
	}
	for(int i=0;i<a;i++)
	{

		for(int j=0;j<d;j++)
		{
			int sum=0;
			for(int k=0;k<d;k++)
			{
				sum+=mat1[i][k]*mat2[k][j];
			}
			res[i][j]=sum;

		}

	}
	printf("Matrix after multiplication\n");
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<d;j++)
		{
			printf("%d ",res[i][j]    );
		}
		printf("\n");
	}



}

