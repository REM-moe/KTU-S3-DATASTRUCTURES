#include<stdio.h>
#include<stdlib.h>

struct node{int data;
	struct node *lc;
	struct node *rc;
};

void inorder(struct node *root){
	if(root != NULL){
		inorder(root->lc);
		printf("%d=>",root->data);
		inorder(root->rc);
	}
}
struct node *min(struct node *root){
	struct node * c = root;
	while(c && c->lc != NULL){
		c = c->lc;
	}
	return c;
}
struct node *insert(struct node* root, int data){
	if(root == NULL){
		struct node *new = malloc(sizeof(struct node));
		new->data = data;
		new->lc = NULL;
		new->rc = NULL;
		root = new;
		return new;
	}
	if(data < root->data){
		root->lc = insert(root->lc, data);
	}
	else{
		root->rc = insert(root->rc, data);
	}
	return root;
}

struct node *delete(struct node* root, int key){
	if(root == NULL)
		return root;
		if(key < root->data){
			root->lc = delete(root->lc, key);
		}
		else if(key > root->data){
			root->rc = delete(root->rc, key);
		}
		else{
			if(root->lc == NULL){
				struct node *tmp = root->rc;
				free(root);
				return tmp;
			}
			else if(root->rc == NULL){
				struct node *tmp = root->lc;
				free(root);
				return tmp;
			}
			struct node *tmp = min(root->rc);
			root->data = tmp->data;
			root->rc = delete(root->rc, tmp->data);

		}
		return root;
}
int main(){
	struct node *node;
	node = insert(node, 1);
	node = insert(node, 2);
	node = insert(node, 3);
	node = insert(node, 4);
	node = insert(node, 32);
	node = insert(node, 45);
	node = insert(node, 6);
	inorder(node);
	printf("\n\n");
	node = delete(node,1);
	node = delete(node,32);
	node = delete(node,45);
	node = delete(node,3);
	inorder(node);
}                         
