#include<stdio.h>
#include<stdlib.h>

struct node {
	struct node *lc;
	struct node *rc;
	int data;
};

struct node *root = NULL;

void insert(int data){
	struct node* ptr = root; // global boi
	if( ptr == NULL){
		struct node *new = malloc(sizeof(struct node));
		new->data = data;
		new->lc = new->rc = NULL;
		root = new;
	}
	struct node *temp = root;
	struct node *parent;
	struct node *new;
	int flag = 1;
	while(temp != NULL & flag == 1){
		if(data > temp->data){
			parent = temp;
			temp = temp->rc;	
		}
		else if(data < temp->data){
			parent = temp;
			temp = temp->lc;
		}
		else{
			printf("Data Already Exists \n No Insertion !! \n");
			flag = 0;
		}
	}
	if(temp == NULL){
		if(data > parent->data){
			new = malloc(sizeof(struct node));
			new->data = data;
			parent->rc = new;
		}
		else{
			new = malloc(sizeof(struct node));
			new->data = data;
			parent->lc = new;
		}
	}
	printf("\n  Inserted Node: %d\n",data);
}

void inorder(struct node *ptr){
	if(ptr == NULL)
		return;
	inorder(ptr->lc);
	printf("%d -> ", ptr->data);
	inorder(ptr->rc);
}
/*
struct node *delete(struct node * curr, int key){
	if(curr == NULL)
		return NULL;
	struct node* tmp;
	if(curr->data > key)
		curr->lc = delete(curr->lc, key);
	else if(curr->data > key)
		curr->rc = delete(curr->rc, key);
	else{
		if(curr->lc == NULL){
			tmp = curr->rc;
			return tmp;
		}
		else if(curr->rc == NULL){
			tmp = curr->lc;
			return tmp;
		}
		else{
			curr->data = tmp->data;
			curr->rc = delete(curr->rc, tmp->data);
		}
	}
}
/*
 *
/*void delete_lyf(int key, struct node *ptr){
	if(ptr == NULL){
		printf("Emp::ty Tree \n");
		return;
	}
	struct node *temp = ptr;
	struct node *parent = temp;
	int flag = 0;
	while(temp != NULL && flag == 0){
		if(key == temp->data){
			flag =1;
		}
		else if(key < temp->data){
			parent = temp;
			temp = temp->lc;
		}
		else if(key > temp->data){
			parent = temp;
			temp = temp->rc;
		}
		else{
			printf("Data Does Not Exist");
			flag = 1;
		}
	}
	if(parent->rc == NULL && parent->lc == NULL){
		// Leaf Node's}
	}
	else if(temp->rc != NULL && temp->lc != NULL){
		// delete by shift monkey
	}
	else{
		//find which and delete
	}
}*/


int main(){
	insert(10);
	insert(2);
	insert(3);
	insert(5);
	insert(7);
	insert(4);
	insert(4);
	insert(12);
	insert(34);
	insert(33);
	inorder(root);
	printf("\n\n");
	delete(root, 12);
	delete(root, 5);
	delete(root, 7);
	delete(root, 34);
	delete(root, 33);
	inorder(root);
	free(root);

}
