/*Program to find quickSort smallest element from the given array.
 *
 *Assignment No -> (08) 
 *
 *Question No -> (02)
 *
 *Date -> 19/08/2021
 *
 *author@Rohit Dhiman

 *
 */
#include <stdio.h>
void swap(int arr[],int p,int q)
{
	int temp=arr[p];
	arr[p]=arr[q];
	arr[q]=temp;
}
int Partition(int arr[],int l,int h)
{
	int pivot=arr[h];
	int i=l-1;
	int j;
	for( j=l;j<=h-1;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			swap(arr,i,j);
		}
	}
	swap(arr,i+1,j);
	return i+1;
}
int quickSort(int arr[],int l,int h,int k)
{

	if(k>0&&k<=h-l+1)
	{
		int par=Partition(arr,l,h);
		if(par-l==k-1)
		{
			return arr[par];
		}
		else if(par-l>k-1)
		{
			return quickSort(arr,l,par-1,k);
		}
		else
		{
			return quickSort(arr,par+1,h,k-par+l-1);
		}

	}



}

int main()
{
	int arr[6]={7, 10, 4, 3, 20, 15};
	int k=3;
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=quickSort(arr,0,n-1,k);
	printf("%d",x);
	return 0;
}

