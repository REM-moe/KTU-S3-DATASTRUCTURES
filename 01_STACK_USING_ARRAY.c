#include <stdio.h>
int top = -1;
int stack[1000];
int isnotfull(){
	if(top == 999){
		printf(" STACK IS FULL \n");
		return 0; 
	}
	else {
		printf(	" STACK IS NOT FULL \n");
		return 1;
	}
}
int isnotempty(){
	if(top == -1){
		printf(" STACK IS EMPTY \n");
		return 0;
	}
	else {
		printf("STACK IS NOT EMPTY \n");
		return 1;
	}
}
int push(){
	if(isnotfull()){
		printf("Enter Data \n --->> ");
		scanf("%d",&stack[++top]);
		printf("Data Inserted, now top = %d | top = %d \n",stack[top],top);
		return 0;
	}
	else{
		printf(" ***** THE STACK IS FULL ***** \n");
		return 1;
	}
}
int pop(){
	if(isnotempty()){
		printf("Popping %d \n",stack[top--]);
		printf("Now top = %d | top = %d \n",stack[top],top);
		return 0;
	}
	else {
		printf("***** THE STACK IS EMPTY ***** \n");
		return 1;
	}
}
void display(){
	printf(" ***** STACK ***** \n");
	int t = top;
	while(t != -1){
		printf("%d\n",stack[t--]);
	}
}
int main(){
	while(1){
		printf(" ***** MENU ***** \n 0 : exit \n 1 : push \n 2 : pop\n 3 : isfull\n 4 : isempty \n 5 : display \n ------>>> ");
		int choice;
		scanf("%d",&choice);
		switch (choice){
			case 0 : return 0;
			case 1 : push(); break;
			case 2 : pop();  break;
			case 3 : isnotempty();  break;
			case 4 : isnotempty(); break;
			case 5 : display(); break;
			default: printf("Enter Correct Option !!! \n"); break;
		}
	}
}
