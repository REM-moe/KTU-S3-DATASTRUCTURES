#include<stdio.h>
#include<stdlib.h>

typedef struct a{ struct a* next; int data; }node;

node* top; node* new;

int push(node* tmp){
	top = tmp;
	if(top != NULL){
		int elem;
		printf("Enter Element To Insert: ");
		scanf("%d",&elem);
		new = (node*) malloc(sizeof(node));
		new->data = elem;
		new->next = top;
		top = new;
		printf("Inserted %d \n",top->data);
		return 0;
	}
}

int pop(){
	if(top != NULL){
		printf("Popped: %d \n",top->data);
		top = top->next;
		return 0;
	}
	printf("Stack Empty");
	return 1;
}
int display(node* tmp){
	while(tmp != NULL){
		printf("%d \n",tmp->data);
		tmp = tmp->next;
	}
}
int main(){
	new = (node*) malloc(sizeof(node));
	push(new);
	push(new);
	push(new);
	push(new);
	push(new);
	push(new);
	push(new);
	push(new);
	push(new);
	push(new);
	display(top);
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	display(top);
}
