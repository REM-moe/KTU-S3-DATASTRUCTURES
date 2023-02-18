#include<stdio.h>
#include<stdlib.h>
typedef struct nd{
	int data;
	struct nd *next; } node;
int main()
{
	node *list; 
	node *prev = NULL;
	node *head = NULL;
	printf("Enter number of nodes to be created : ");
	int n; int i =0;
	scanf("%d",&n);
	while(i<n){
		list = (node*) malloc(sizeof(node)); // list has address 
		if(head == NULL){
			head = list; // sets head to list  
		}
		else {
			prev->next = list; // next addr is given in next iteration
		}
		list->next = NULL; // setting next part of that tnode to NULL
		printf("ENTER DATA TO BE ENTERED: ");int num;
		scanf("%d",&num);
		list->data = num;
		prev = list;
		i++;
	}
}
