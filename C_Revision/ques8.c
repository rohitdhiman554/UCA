
/* 
 *  function reverse(char* s)  that reverses the character string
 * @Rohit Dhiman (1910991113),30/07/2021
 * assignment: C Foundations(question 8)
 */
#include <stdio.h>
void reverse(char *arr,int size)
{
	char a[size];
	for(int i=0;i<size;i++)
	{
		a[i]=arr[size-i-1];
	}
	for(int i=0;i<size;i++)
	{
		printf("%c",a[i]);
	}

}


int main()
{
	char arr[]="hello world";
	int i=0,len=0;
	while(arr[i]!='\0')
	{
		len++;
		i++;
	}

	reverse(arr,len);


}

