/* 
 * implementation of library function strncmp,strncat,strncpy
 * @Rohit Dhiman (1910991113),6/07/2021
 * assignment: C Foundations(question 14)
 *Compilation: gcc ques14.c 
 *Execution: ./a.out
 */
#include <stdio.h>
#include <string.h>
void strncatf(char *s,char *t,int n)//function that appends the string t at the end of string s upto n characters long
{

	int i=0,j=0,l=0;
	while(s[i++]!='\0')
	{
		l++;
	}

	for(i=l;i<l+n;i++)
	{
		s[i]=t[j];
		j++;
	}
	s[i]='\0';
	printf("%s",s);

}
void strncpyf(char *des,char *src,int size)//function that copies upto given size from src string to destination string.
{
	int i;
	for(i=0;i<size&&src[i]!='\0';i++)
	{
		des[i]=src[i];
	}
	des[i]='\0';
	printf("destination=%s",des);
}

int strncmpf(char *a,char *b,int n)//function which compares two string are equal or not
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==b[i])
		{
			count++;
			continue;
		}
		int x=(int)a[i];
		int y=(int)b[i];
		if(x>y)
		{
			return 1;//if a is greater than b 
		}
		return -1;//if b is greater than a
	}
	if(count==n)
	{
		return 0;//if both are equal
	}
}



int main()
{
	char s[]="abcd";
	char t[]="kd";
	strncatf(s,t,2);
	printf("\n");
	char src[4]="abcd";
	char des[10];
	strncpyf(des,src,10);

	char a[]="abcdef";
	char b[]="ABCDEF";
	int res=strncmpf(a,b,4);
	if(res>0)
	{
		printf("string A is greater");
	}
	else if(res<0)
	{
		printf("string B is greater");
	}
	else
	{
		printf("both strings are equal");
	}


	return 0;
}
