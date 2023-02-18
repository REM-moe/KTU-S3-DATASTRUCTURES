#include<stdio.h>
#include<stdlib.h>
typedef struct nd{
	int data;
	struct nd *next;
}node ; 
node *head = NULL; node *prev = NULL; node *list; node *disp;

void display(node* ptr){
	do {
		printf("%d\n",ptr->data);
		head= ptr->next;
	}while(ptr->next != NULL);
}

int main(){
	printf("Enter the number of nodes to be created : ");    int sz;
	scanf("%d",&sz); int i =0;
	while(i<sz){
		list = (node*) malloc(sizeof(node*));
		if(head == NULL){
			head = list;
		}
		else{
			list->next = list; 
		}
		list->next = NULL;
		printf("Enter Data to BE Entered :"); int data;
		scanf("%d",&data);
		list->data = data;
		i++;
		}
	display(head);
}


