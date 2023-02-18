#include<stdio.h>
#include<stdlib.h>

typedef struct a{int data;
		struct a *next;}node;
int top;int n; int data;
node *head = NULL;node *new; node *temp = NULL; node *ptr;
void push(){
	// add to Front
	new = (node*) malloc(sizeof(node));
		printf("Enter Data To Be Pushed : ");
		scanf("%d",&data);
	if(head == NULL){
	head = new;
	head->next = NULL;
	head->data = data;
	temp = new;
	top = data;
	}
	else{
		new->data = data;
		new->next = head; // head has old node in fronts address
		head = new;
		top = new->data;
	}
}
void pop(){
	// delete from front
	printf("Popped %d From Stack ",top);
	ptr = head->next;
	top = ptr->data;
	head = ptr;
	printf("New Top Element is ---->>> %d\n",top);
}
void display(){
	temp = head;
	while(temp != NULL){
		data = temp->data;
		printf("%d\n",data);
		temp = temp->next;
	}
	printf("Element At Top Is \n----->>> %d \n",top);
}
int main(){
	int i;
	i=0;
	printf("Enter Number Of Nodes To Be Created : ");
	scanf("%d",&n);
	while(i<n){
		push();
	i++;
	}
	display();
	pop();
	display();
}
