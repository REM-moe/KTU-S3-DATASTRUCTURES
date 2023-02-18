#include<stdio.h>
int main(){
int a[50],ele,siz,count=0;
printf("Enter size of array\n");// count++;
scanf("%d",&siz);//count++;
printf("Enter the elements\n");// count++;
for (int i = 0;i<siz;i++)
{
//count++;
scanf("%d",&a[i]); //count++;
}
printf("Enter the element to be searched\n");//count++;
scanf("%d",&ele);//count++;
for (int j = 0;j<siz;j++)
{
count++;
if (a[j]==ele){
	count++;
	printf("Element %d found at %d ",ele,j+1);count++;
	break;
}
if (j==siz){
count++;
printf("Element %d not found!",ele);count++;}
}
printf("%d",count);
return 0;
}
