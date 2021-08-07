/*
 * Selection Sort using recursion
 *
 * @RohitDhiman 1910991113
 *
 * Assignment=05 
 *
 *05/ 08/ 2021
 
 *Compilation: gcc selecsort.c
 * Execution: ./a.out
 */

include <#stdio.h>
//function returns sorted array
int* selectionsort(int a[],int l,int h)
{
    if(l==h)//if array has only one element or base condition if l index of array moves to end i.e (h)
    {
        return a;
    }
    else
    {
        int min=l;//find the minimum element
        for(int i=min+1;i<=h;i++)
        {
            if(a[min]>a[i])
            {
                int temp=a[min];
                a[min]=a[i];
                a[i]=temp;
            }
        }
    }
    selectionsort(a,l+1,h);//moving index (l+1) of and array to (h) end of array
}
int main()
{
    int a[]={5,8,1,6,3};//array with random elements

    int n=sizeof(a)/sizeof(a[0]);
    selectionsort(a,0,n-1);//calling function
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i])
    }

    return 0;
}
