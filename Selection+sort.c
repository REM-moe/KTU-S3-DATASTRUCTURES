#include<stdio.h>

void selection_sort(int array[], int size){
	for(int i =0; i<size; i++){
		int min = array[i];
		for(int j = i+1; j<size; j ++){
			if(array[j] < array[min]){
				min = j;
			}
		}
		if(min != i){
			int tmp = array[min];
			array[min] = array[i];
			array[i] = tmp;
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
	selection_sort(array, size);
	print(size, array);
}
