/* 
 * queue implementation using Linkedlist
 * @Rohit Dhiman (1910991113),29/08/2021
 * Compilation: gcc q2.c
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

}*front=NULL,*rear=NULL;

void enqueue(int x)
{
	struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=x;

	if(front==NULL)
	{
		front=rear=temp;
		temp->next=NULL;
		return;
	}
	rear->next=temp;
	rear=temp;
	count++;
}
void dequeue()
{
	if(front==NULL)
		return;

	struct Node *temp=front;
	temp=temp->next;
	printf("dequeued element is %d\n",front->data);
	free(front);
	front=temp;
	count--;
	if(front==NULL)
	{
		printf("queue is empty\n");
		rear=NULL;
	}
}
void peek()
{
	if(front==NULL)
	{
		printf("there is no peek element\n");
		return;
	}
	else
	{
		printf("peek element is %d\n",front->data);
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
	enqueue(10);
	enqueue(20);
	printf("%d\n",front->data);
	dequeue();
	dequeue();
	peek();

	return 0;
}
