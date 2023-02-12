#include<stdio.h>

int l_search(int array[], int key, int size){
	for(int i = 0; i<size; i++){
		if(array[i] == key)
			return i;
	}
	return -1;
}

int main(){
	printf("Enter Size Of Array: ");
	int size = 0;
	int elem = 0;
	scanf("%d",&size);
	int array[size];
	printf("Enter Elements: ");
	for(int i = 0; i<size; i++){
		scanf("%d",&elem);
		array[i] = elem;
	}
	printf("Enter Element To Be Searched: ");
	scanf("%d",&elem);
	elem = l_search(array, elem, size);
	if(elem != -1){
		printf("Element Found At Postion: %d \n",elem+1);
		return 0;
	}
	printf("Element Not Found\n");
	return 1;
}
