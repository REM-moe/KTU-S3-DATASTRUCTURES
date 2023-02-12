#include<stdio.h>
int size = 4;
int top = -1;
int stack[4];
void push(int element){
	if(top == size){
		printf("Stack is Full\n");
	}
	else{
		top = top+1;
		stack[top] = element;
		printf("pushed : %d now top: %d\n",stack[top], top);
	}
}

int pop(){
	if(top < 0){
		printf("Stack Is Empty\n");
	}
	else{
		int k = stack[top];
		top--;
		printf("popped %d now top = %d\n", k, top);
	}
}

int main(){
	push(5);
	push(4);
	push(3);
	push(2);
	pop();
	pop();
	pop();
	pop();
	pop();
}
