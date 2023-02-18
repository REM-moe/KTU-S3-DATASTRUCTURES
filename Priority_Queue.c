#include<stdio.h>
struct{
	int priority;
	int value;
}PQ[20];
int f =-1;
int r = -1;
void enQ(int priority, int value,int size){
	if (f == 1 && r == -1 ){
	r++; f++;
	PQ[r].priority = priority;
	PQ[r].value = value;
	}
	else if((r+1)%(size) == f){
		printf("QUEUE FULL !\n");
	}
	else{
		r = ((r+1)%size);
		PQ[r].value = value;
		PQ[r].priority = priority;
	}
}

int DeQ(int *size){
	if (r == -1 && f == -1){
		printf("QUEUE is EMPTY!!\n");
		return 0;
	}
	else {
		int l =0,pos;
		for(int i =f ; i<=r ; i=((r+1)%*size)){
			if( PQ[i].priority > l){
				l = PQ[i].priority;
				pos = i;
			}
		printf("ELEMENT DEQUED IS %d",PQ[i].value);
		for (int k = i; k<=r ; k++){
			PQ[k] = PQ[(k+1)%*size];
			}
		}
	}
}

int main(){
	printf("Enter Size of QUEUE : ");
	int size;
	scanf("%d",&size);
	int i =0; int priority; int value; int option;int times; int j =0; 
	printf("ENTER \n 1 : ENQUEUE \n 2 : DEQUEUE \n ---> ");
	enQ(1, 2, size);
	enQ(2, 2, size);
	enQ(3, 2, size);
	enQ(4, 2, size);
	enQ(5, 2, size);
	enQ(6, 2, size);
	enQ(7, 2, size);
	enQ(8, 2, size);
	enQ(10, 2,size);
	DeQ(&size);	
}
