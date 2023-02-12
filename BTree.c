#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *lc;
	struct node *rc;
	int value;
};

void inorder(struct node *root){
	if(root == NULL)
		return;
	inorder(root->lc);
	printf("%d -> ", root->value);
	inorder(root->rc);
}

void preorder(struct node *root){
	if(root == NULL)
		return;
	printf("%d -> ", root->value);
	preorder(root->lc);
	preorder(root->rc);
}

void postorder(struct node *root){
	if(root == NULL)
		return;
	postorder(root->lc);
	postorder(root->rc);
	printf("%d -> ", root->value);
}



void insert(struct node *root, int val){
	int data;
	if(root != NULL)
		root->value = val;
	printf(" 1: for inserting: \n 2: for stop ---->>> ");
	scanf("%d",&data);
	switch(data){
		case 1:
			printf("Enter Data \n ---->>>");
			scanf("%d",&data);
		if(data > root->value){
			struct node *new = malloc(sizeof(struct node));
			root->rc = new;
			insert(new, data);
		}
		else if(data< root->value){
			struct node* new = malloc(sizeof(struct node));
			root->lc = new;
			insert(new, data);
		}
		else{
			printf("Data Already Exists\n");
		}
		break;
		case 2:
			exit(0);
		default:
			printf("Enter Correct Options\n");
	}
}

int main(){
	struct node* head = malloc(sizeof(struct node));
	insert(head, 1);
	printf("\nINORDER \n");
	inorder(head);
	printf("\nPREORDER \n");
	preorder(head);
	printf("\nPOSTORDER \n");
	postorder(head);
}
