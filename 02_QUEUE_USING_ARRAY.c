#include <stdio.h>
int top = -1;
int rear = -1;
int QUEUE[1000];
int isnotfull(){
	if(rear == 999){
		printf(" QUEUE IS FULL \n");
		return 0; 
	}
	else {
		printf(	" QUEUE IS NOT FULL \n");
		return 1;
	}
}
int isnotempty(){
	if(top == -1 && rear ==-1){
		printf(" QUEUE IS EMPTY \n");
		return 0;
	}
	else {
		printf("QUEUE IS NOT EMPTY \n");
		return 1;
	}
}
int Enqueue(){
	if(isnotfull()){
		if(rear == -1){
			top++;
			rear++;
			printf("Enter Data \n --->> ");
			scanf("%d",&QUEUE[rear]);
			printf("Data Inserted, now rear = %d | rear = %d \n",QUEUE[rear],rear);
			return 0;
		}
		else{
			rear++;
			printf("Enter Data \n --->> ");
			scanf("%d",&QUEUE[rear]);
			printf("Data Inserted, now top = %d | rear = %d \n",QUEUE[rear],rear);
			return 0;
		}
	}
	else{
		printf(" ***** THE QUEUE IS FULL ***** \n");
		return 1;
	}
}
int Dequeue(){
	if(isnotempty()){
		 if(top == -1 && rear == -1){
			top = 0;
			rear = 0;
			printf("Dequeueing %d \n",QUEUE[top]);
			return 0;
		}
		else if(top == rear){
			printf("Dequeing %d \n",QUEUE[top]);
			top = -1;
			rear = -1;
			return 0;
		}
		else {
			printf("Dequeueing %d \n",QUEUE[top++]);
		}
	}
	else{
		printf("***** THE QUEUE IS EMPTY ***** \n");
		return 1;
	}
}
void display(){
	printf(" ***** QUEUE ***** \n");
	int t = top;
	if(!isnotempty()){
		printf("NOTHING TO DISPLAY \n");
	}
	else{
		while(t <= rear){
		printf("%d\n",QUEUE[t++]);
		}
	}
}
int main(){
	while(1){
		printf(" ***** MENU ***** \n 0 : exit \n 1 : Enqueue \n 2 : Dequeue\n 3 : isfull\n 4 : isempty \n 5 : display \n ------>>> ");
		int choice;
		scanf("%d",&choice);
		switch (choice){
			case 0 : return 0;
			case 1 : Enqueue(); break;
			case 2 : Dequeue();  break;
			case 3 : isnotempty();  break;
			case 4 : isnotempty(); break;
			case 5 : display(); break;
			default: printf("Enter Correct Option !!! \n"); break;
		}
	}
}
