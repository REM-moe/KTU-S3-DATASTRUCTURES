#include<stdio.h>

int f = 0;
int r = 0;
int queue[4];

int enqueue(int elem){
	r = (r+1)%4;
	if(f == r){
		printf("Queue Full\n");
		return 1;
	}
	queue[r] = elem;
	printf("%d was enqued now rear : %d \n", queue[r], r);
	return 0;
}

void dequeue(){
	if(f == r){
		printf("Queue is Empty \n");
	}
	int e = queue[f];
	f = (f+1)%4;
	printf("%d was dequeued, front : %d\n", e, f);
}

int main(){
	enqueue(1);
	enqueue(2);
	enqueue(3);
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	dequeue();
}
