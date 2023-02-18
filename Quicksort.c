#include<stdio.h>
void swap(int a[],int i, int j){
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

int Partetion(int a[], int low, int high){
	int pivot = a[low];
	int i = low;
	int j = high;
	while(i<j){
	do{i++;}while(a[i]<=pivot);
	do{j--;}while(a[i]>=pivot);
	if(i<j){
		swap(a,i,j);
		}
	}
	swap(a,low,j);
	return j;
}
void Quick(int a[],int low, int high){
	int k = Partetion(a,low,high);
	Quick(a,low,k);
	Quick(a,k+1,high);
}
int main(){
	printf("Enter Size Of Array : ");
	int size;
	scanf("%d",&size);
	int a[size];
	printf("%d",size);
	int i = 0;
	printf(" ***** Enter Elements ***** \n");
	while(i<size){
		scanf("%d",&a[i]);
		i++;
	}
	printf("Qucik Sort Running");
	//Quick(a,0,size-1);
}
