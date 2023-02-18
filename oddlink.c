#include<stdio.h>
#include<stdlib.h>
typedef struct nd{
	int data;
	struct nd *next;
}node;
int data;
node *head = NULL; node *temp; node *new;node *prev,*ptr,*ptr1;
void display(){
	temp = head;
	if(temp == NULL){printf("\n Empty Linked Lists Are No Fun :( \n");}
	else{printf("\n*****LINKED LIST*****\n");
	while(temp != NULL){
	data = temp->data;
	printf("\t%d\n",data);
	temp = temp->next;
	}
      }
}
//delete odd elements from linkedlist
int position;
int deleteanywhere(int k){
	temp = head;
    	ptr=head;
    	while(ptr->data!=k)
    	{
        	ptr1=ptr;
        	ptr=ptr->next;
    	}
    	ptr1->next=ptr->next;
}
void createnodes(){
	int i =0;
	printf("Enter Number Of Nodes To be Created : ");
	scanf("%d",&n);
	while(i<n){
		new = (node*) malloc(sizeof(node));
		printf("Enter data : ");
		scanf("%d",&data);
		if(head == NULL){
			head = new;
			new->data = data;
			new->next = NULL;
			prev = new;
		}
		else{
			prev->next = new;
			new->data = data;
			new->next = NULL;
			prev = new;
		}
		i++;
	}
}
void deletefront(){
	if(head == NULL){
	printf("\n Empty Linked Lists Are No Fun :( \n");
	}
	else{
		printf("\nDeleting First Node...\n");
		ptr = head->next;
		head = ptr;
	}
}
void deleteElements(node *address){	
	if(address->next == NULL){ // last node
		printf("Deleted item is %d",address->data);
		address->data = 0;
		address->next = NULL;
	}
	else if(address == head->next){ // first node
		deletefront();
	}
	else{
		deleteanywhere();
	}
}
int returnstuff(){
	

}
int main(){
	createnodes();
	display();
	return 0;
}
