#include <stdio.h>
int main()
{
printf("Enter number of rows and colums ");
int row ,col;
scanf("%d",&row);
scanf("%d",&col);
int a[row][col] ;
int s[row][3];
int non_0 =0;
for (int i=0;i<row;i++)
	{
	for(int j=0;j<col;j++)
		{	printf("Enter Elements :");
			scanf("%d",&a[i][j]);

		}printf("\n");
	}

//sparse
int k = 0;
for (int i=0;i<row;i++)
	{
	for(int j=0;j<col;j++)
		{
			if (a[i][j] !=0)
				{
				s[k][0] = i;
				s[k][1] = j;
				s[k][2] =a[i][j];
				non_0 += 1;
				k++;
				}
		}
	}
// print
printf("\t non zero elements : %d \n",non_0);
for (int i=0;i<k;i++)
	{
	for(int j=0;j<3;j++)
		{
		printf("\t%d",s[i][j]);
		}
	printf("\n");
	}
}
