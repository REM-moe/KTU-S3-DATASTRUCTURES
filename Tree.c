#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *lc;
	struct node *rc;
	int value;
};

struct node *root;
void inorderTraversal(struct node* root) {
	  if (root == NULL) 
		return;
	inorderTraversal(root->lc);
	printf("%d ->", root->value);
	inorderTraversal(root->rc);
}

void preorderTraversal(struct node* root) {
	  if (root == NULL) 
		return;
	printf("%d ->", root->value);
	preorderTraversal(root->lc);
	preorderTraversal(root->rc);
}

void postorderTraversal(struct node* root) {
	  if (root == NULL) 
		return;
	postorderTraversal(root->lc);
	postorderTraversal(root->rc);
	printf("%d ->", root->value);
}
struct node* create(int val){
	struct node* new = malloc(sizeof(struct node));
	new->value = val;
	new->lc = NULL;
	new->rc = NULL;
	return new;
}

struct node* insert(struct node *root, int val){
	root->value = val;
	int data;
	int opt;
	printf("Does Node Have Left Child (1/0): ");
	scanf("%d",&opt);
	if(opt == 1){
		if(root != NULL){
			printf("Enter Data: ");
			scanf("%d",&data);
			struct node *new = malloc(sizeof(struct node));
			root->lc = new;
			insert(new, data);
		}
	}
	else{
		root->lc = NULL;
	}
	printf("Does Node Have Right Child (1/0): ");
	scanf("%d",&opt);
	if(opt == 1){
		if(root != NULL){
			printf("Enter Data: ");
			scanf("%d",&data);
			struct node *new = malloc(sizeof(struct node));
			root->rc = new;
			insert(new, data);
		}
	}
	else{
		root->rc = NULL;
	}
}
int main(){
	struct node* root = create(1);
  	insert(root, 1);
	printf("INORDER TRAVERSAL\n");
	inorderTraversal(root);
	printf("\nPREORDER TRAVERSAL\n");
	preorderTraversal(root);
	printf("\nPOSTORDER TRAVERSAL\n");
	postorderTraversal(root);
}
