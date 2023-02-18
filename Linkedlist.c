#include<stdio.h>
#include<stdlib.h>
typedef struct a{ int data;
		struct a *next; 
		}node;
node *head= NULL; node *prev; node *new; node *temp; node *ptr;
int data; int position; int n;
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
int getnodenum_no_print(){
	int count=0;
	temp = head;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}
void getnodenum_print(){
	int count=0;
	temp = head;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	if(count == 0){printf("\n Empty Linked Lists Are No Fun :( \n");}
	printf("There Are %d Nodes\n",count); 
}
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
void insertfront(){
	printf("Enter Data To Be Inserted at First Position : ");
	scanf("%d",&data);
	if(head == NULL){
		new = (node*) malloc(sizeof(node));
		printf("There Is No Node To Insert At First !! \n Creating first Node... \n");
		head = new;
		new->data = data;
		new->next = NULL;
		prev = new;
		printf("\nNode Created...\n");
	}
	else{
		new = (node*)malloc(sizeof(node));
		new->next = head;
		head = new;
		new->data = data;
	}
}
void insertlast(){
	if(head == NULL){
		insertfront();
	}
	else{
		temp = head;
		while(temp != NULL){
			ptr = temp;
			temp = temp->next;
		}
		printf("Enter Data To Be Entered At Last Node : ");
		scanf("%d",&data);
		new = (node*)malloc(sizeof(node));
		ptr->next = new;
		new->data = data;
		new->next = NULL;
	}
}
int insertanywhere(){
	printf("Enter Position Where You Want To Insert New Node : ");
	scanf("%d",&position);
	ptr = head;
	new = (node*) malloc(sizeof(node));
	if(position>n){
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
void deletelast(){
	if(head == NULL ){
		printf("\n List Is Empty :( \n What's There For Me To Delete :\\ \n");
	}
	else{
		temp = head;
		printf("\n Deleting Last Node....\n");
		if(temp->next == NULL){
			deletefront();
		}
		else{
		while(temp->next != NULL){
			ptr = temp;
			temp = temp->next;
		}
		ptr->next = NULL;
		}
	}
}
int main(){
	int choice;
	char repeat;
	do{
	printf(" Enter\n 1 : For Creating LinkedList \n 2 : To Insert New Node At First Position \n 3 : For Inserting Node At Last Position\n 4 : For Inserting Node At Any Position\n 5 : For Deleting First Node \n 6 : For Deleting Last Node\n 7 : For Displaying Number Of Nodes \n 8 : For Displaying The LinkedList \n------->>> ");
	scanf("%d",&choice);
	switch(choice){
		default : printf("I dont Know What %d Does !!! \n",choice); break;
		case 1 : createnodes(); break;
		case 2 : insertfront(); break;
		case 3 : insertlast();  break;
		case 4 : insertanywhere(); break;
		case 5 : deletefront();  break;
		case 6 : deletelast();	break;
		case 7 : getnodenum_print(); break;
		case 8 : display(); break;
		}
		printf("Do You Want To Continue Or Not [yes - y] : ");
		scanf("%s",&repeat);
	}while(repeat == 'y');
	return 0;
}
