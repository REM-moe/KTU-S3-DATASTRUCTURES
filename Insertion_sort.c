#include<stdio.h>

void insertion_sort(int size, int array[]){
	for(int i =1; i< size; i++){
		int tmp = array[i];
		int j = i-1;
		while(j>=0 && array[j]>tmp){
			array[j+1] = array[j];
			j -= 1;
		}
		array[j+1] = tmp;
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
	insertion_sort(size, array);
	print(size, array);
}
