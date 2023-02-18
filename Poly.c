#include<stdio.h>
int main()
{
struct{int coef;
	int power;}A[10],B[10],C[10];
printf("Enter Max Power Of FIrst Equation : ");
int max_exp;
scanf("%d",&max_exp);
int c = max_exp;
for(int i=0;i<max_exp+1;i++)
	{
	printf("Enter Power Of [X] : ");
	scanf("%d",&A[i].power);
	printf("Enter Coefficient of x^%d Of First Equation [1] %d--left\n",A[i].power,c);
	scanf("%d",&A[i].coef);c--;
	}
printf("\nSECOND EQUATION \n ");
int max_ex;
printf("Enter Max Power Of Second Equation : ");
scanf("%d",&max_ex);
for (int i =0 ;i<max_ex+1;i++)
	{
	printf("Enter Power of [Y] : ");
	scanf("%d",&B[i].power);
	printf("Enter Coefficient Of Y^%d in Second Equation\n",B[i].power);
	scanf("%d",&B[i].coef);
	}
// Addition
int g = (max_exp>max_ex)?max_exp:max_ex ;
for (int i =0;i<g+1;i++)
	{
		if (A[i].power == B[i].power)
		{
		C[i].coef = A[i].coef + B[i].coef ;
		C[i].power = A[i].power;
		}
	}

}
