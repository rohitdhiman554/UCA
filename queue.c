/* 
 * Queue implementation using C
 * @Rohit Dhiman (1910991113),6/07/2021
 * Compilation: gcc queue.c
 * Execution: ./a.out
 */
#include <stdio.h>
#include<stdbool.h>
#define max 10
int arr[max];
int front=0,size=0;
int rear=max-1;
bool isFull(){
	return size==max;
}
bool isEmpty()
{
	return size==0;
}
int peek()
{
	if(isEmpty())
	{
		return -1;
	}
	return arr[front];
}
int end()
{
	if(isEmpty())
	{
		return -1;
	}
	return arr[rear];
}

int length()
{
	return size;
}

void enqueue(int data)
{
	if(isFull())
	{
		return;

	}
	rear=(rear+1)%max;
	arr[rear]=data;
	size++;
	printf("%d is enqueued to queue\n",data);

}
int dequeue()
{
	if(isEmpty())
	{
		return -1;
	}
	int data=arr[front];
	front=(front+1)%max;
	size--;

	return data;
}



int main()
{
	enqueue(10);
	printf("%d dequeued from queue\n",dequeue());
	printf("Front item is %d\n", peek());
	printf("Rear item is %d\n", end());

	printf("%d",isEmpty());






}

