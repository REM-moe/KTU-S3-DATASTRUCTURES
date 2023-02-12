#include<stdio.h>
int size = 4;
int front = -1;
int rear = -1;
int queue[4];
void enqueue(int element){
	if(rear != size){
		if(front == -1){
			front++; rear++;
			queue[rear] = element;
		}
		else{
			rear = rear+1;
			queue[rear] = element;
			printf("enqued : %d now rear: %d\n",queue[rear], rear);
		}
	}
	else{
		printf("Queue is Full\n");
	}
}

int dequeue(){
	if(front == size){
		printf("Queue Is Empty\n");
	}
	else{
		front++;
		printf(" queue: %d f = %d\n", queue[front], front);
	}
}

int main(){
	enqueue(9);
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
}
