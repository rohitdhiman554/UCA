/* 
 * Stack implementation using LinkedList
 * @Rohit Dhiman (1910991113),29/08/2021
 * Compilation: gcc q1.c
 * Execution: ./a.out
 */
#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int count=0;
struct Node
{
	int data;
	struct Node *next;
}*top,*temp;

void push(int data)
{
	if(top==NULL)
	{
		top=(struct Node*)malloc(sizeof(struct Node));
		top->next=NULL;
		top->data=data;

	}

	else
	{
		temp=(struct Node *)malloc(sizeof(struct Node));
		temp->next=top;
		temp->data=data;
		top=temp;
	}
	printf("top is=%d\n",top->data);
	count++;


}
void pop()
{
	if(top==NULL)
	{
		printf("stack is empty");
	}
	else
	{
		struct Node *top1;
		top1=top->next;
		printf("popped value is %d",top->data);
		free(top);
		top=top1;
		count--;
	}
}
int peek()
{
	if(top==NULL)
	{
		printf("stack is empty");
		return 0;
	}
	else
	{
		return top->data;
	}
}
bool isEmpty()
{
	if(count==0)
	{
		return true;
	}
	return false;

}


int main()
{
	push(10);
	push(20);
	push(30);
	printf("peek element is %d\n",peek());
	pop();




	return 0;
}
