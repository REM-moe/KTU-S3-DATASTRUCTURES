#include<stdio.h>

int bubble_sort(int array[], int size){
	for(int i = 0; i<size-1; i++){
		for(int j = 0; j<size-1; j++)
			if(array[j] > array[j+1]){
			int tmp = array[j];
			array[j] = array[j+1];
			array[j+1] = tmp;
			}
	}
}

void print(int size, int array[]){
	for(int i =0; i<size; i++)
		printf("%d->",array[i]);
	printf("\n");
}

void main(){
	printf("Enter Size Of Array: ");
	int size;
	scanf("%d",&size);
	int array[size];
	printf("Enter Elements: ");
	for(int i =0; i<size; i++)
		scanf("%d",&array[i]);
	printf("Array Before Sorting \n");
	print(size, array);
	printf("Array After Sorting \n");
	bubble_sort(array, size);
	print(size, array);
}
