/* 
 * Program that counts how many inversion will make the array in sorted form.
 * @Rohit Dhiman (1910991113),12/08/2021
 * Compilation: gcc inversion_count.c  
 * Execution: ./a.out
 * assignment:7
 */
#include <stdio.h>

int main()
{
    int arr[]={3,1,2};
    int count=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for(int i=1;i<len;i++)
    {
        int ele=arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>ele)
            {
                arr[j+1]=arr[j];
                count++;
            }
        }
        arr[j+1]=ele;
    }
   printf("%d",count);
    return 0;
}
