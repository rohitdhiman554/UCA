/* 
 * function htoi(char* s), which converts a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value.
 * @Rohit Dhiman (1910991113),30/07/2021
 * assignment: C Foundations(question 9)
 */
#include <stdio.h>

int htoi(char *s)
{

	int sum=0,hex;
	int i=0;

	if(s[i]=='0')
	{
		++i;
		if(s[i]=='x'||s[i]=='X')
		{
			++i;
		}
	}



	while(s[i]!='\0')
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			hex=s[i]-'0';
		}
		else if(s[i]>='a'&&s[i]<='f')
		{
			hex=s[i]-'a'+10;

		}
		else if(s[i]>='A'&&s[i]<='F')
		{
			hex=s[i]-'A'+10;
		}
		else
		{
			break;
		}


		sum=sum*16+hex;

		i++;



	}

	return sum;



}
int main()
{
	char a[]="0XAF";
	int v=htoi(a);
	printf("%d",v);

	return 0;
}
