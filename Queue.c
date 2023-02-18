#define MAX_SIZE 10
#include<stdio.h>
int QUEUE[MAX_SIZE];
int front = -1;
int rear = -1;
// Check is QUEUE is Empty
int isEmpty()
{
	if (front ==-1 && rear == -1)
	{
		return 1; // is EMPTY
	}
	else 
		return 0; // Not Empty
}

// Check is QUEUE is Full

int isFull()
{
	if (rear == MAX_SIZE-1)
	{
		printf("QUEUE Full!!! \n");
		return 1; // FULL
	}
	else 
		return 0;

}
// ADD elements to QUEUE

int Enqueue(int element)
{
	if(!isFull())
	{
		if (rear == -1 && front == -1)
		{
		rear++;
		front++;
		QUEUE[rear] = element;
		printf("ADDED f = %d b = %d elem = %d \n",front,rear,QUEUE[rear]);
		}
	
		else
		{
		QUEUE[++rear] = element;
		printf("ADDED f = %d b = %d elem = %d \n",front,rear,QUEUE[rear]);
		}
	}
}

// DELETE elements from QUEUE
int Dequeue()
{
if(!isEmpty())
	{
		if(front ==-1 && rear ==-1)
		{
			printf("QUEUE EMPTY!! \n");
		}
		else if(front == rear)
		{
			printf("DELETED = %d b = %d elem = %d \n",front,rear,QUEUE[front]);
			front =0;
			rear =0;
		}
		else
		{
			printf("DELETED f = %d b = %d elem = %d \n",front,rear,QUEUE[front]);
			front++;
		}

	}

}
// DISPLAY THE QUEUE
void display()
{
if(front == -1 && rear ==-1)
	printf("EMPTY!!/n");
else
{
	for(int i = front;i<=rear;i++)
	{
		printf("ELEMENT at %d : %d\n",front++,QUEUE[i]);
	}
}

}


int main()
{
	Enqueue(10);
	Enqueue(440);
	Enqueue(26);
	Enqueue(27);
	Enqueue(208);
	Enqueue(233);
	Enqueue(201);
	Enqueue(20);
	Enqueue(0);
	Enqueue(4);
	Enqueue(10);
	Enqueue(90);
	Enqueue(40);
	Enqueue(20);
	Enqueue(30);
	Dequeue();
	display();
}
