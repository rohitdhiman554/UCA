/* 
 * Count vowels and consonants in String
 * @Rohit Dhiman (1910991113),28/07/2021
 * assignment: C Foundations(question 3)
 */
#include <stdio.h>


int main()
{

    char c[]="C Course";
    int vowels=0,consonants=0;
    for(int i=0;i<c[i]!='\0';i++)
    {
        if(c[i]=='a'||c[i]=='A'||c[i]=='e'||c[i]=='E'||c[i]=='i'||c[i]=='I'||c[i]=='o'||c[i]=='O'||c[i]=='u'||c[i]=='U')
        {
            vowels++;
        }
        else 
        {
            consonants++;
        }
    }
    printf("%d %d",vowels,consonants);


}

