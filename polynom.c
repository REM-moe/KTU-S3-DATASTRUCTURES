#include<stdio.h>
int main()
{
struct {
	int ex;
	int co;
	}a[10],b[10],c[10];
printf("Enter Largest Degree of Exponent From  Both Equations: ");
int larg;
scanf("%d",&larg);
int k = larg;
int l = k;
for (int i=0;i<=larg;i++)
	{
	printf("Enter coefficient of x^%d : ",k);
	scanf("%d",&a[i].co);
	a[i].ex = k;
	k--;
	}
printf("%d",a[0].ex);
printf("Enter elements of Second Equation  \n");
for (int i=0;i<=larg;i++)
	{
	printf("Enter coefficeint of Y^%d : ",l);
	scanf("%d",&b[i].co);
	b[i].ex = l;
	l--;
	}
//ADDDITION
for (int j =0;j<=larg;j++)
	{
	if (a[j].ex == b[j].ex){
	c[j].co = a[j].co + b[j].co;
	c[j].ex = a[j].ex;
	}}
//RESULT
printf("\n\t RESULANT EXPRESSION \t \n");
for (int i =0;i<=larg;i++)
	{
	if (c[i].ex == 0)
		printf("%d\n",c[i].co);
	else
	printf("%dX^%d +",c[i].co,c[i].ex);
	}
}
