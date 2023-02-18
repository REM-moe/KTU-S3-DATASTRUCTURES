#include<stdio.h>
#include<stdlib.h>
/* the plan is to create a graph - a chain of linked lists 
 * link[-2]-[1][2]-[3]....[n]
 * 	|   |  |   |
 * (nodes  linked to each data)*/
typedef struct a{
	int data;
	struct a *next;
}Graph;
void create(){
	printf("Enter Total Number Of Nodes In Graph : ");
	int size; scanf("%d",&size);
	Graph a[size]; int k = size;
	for(int i =0; i<size ; i++){
		printf("[%d element left] Enter Element : ",k--);
		scanf("%d",&a[i].data);
	}
}
void insertlinks(){
		

}
int main(){
	create();
}

