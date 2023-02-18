#include<stdio.h>
#include<string.h>
#define MAX_SIZE 10
int top=-1;
int STACK[MAX_SIZE];
char array[MAX_SIZE];
int isEmpty()
	{
		if(top==-1)
			return 1;
		return 0;
	}
int isFull()
	{
		if(top>=MAX_SIZE-1)
			return 1;
		return 0;
	}
int pop()
	{
		int item;
		if(!isEmpty(top))
		{
			item = STACK[top--];
			return item;
		}
	}
void push(int element)
	{
		if(!isFull(top))
			{
			STACK[++top] =element;
			}
	}
/* 1 - (
 * 2 - {
 * 3 - [ */
int main()
{
	char str[10];
	printf("Enter the Expression\n");
	scanf("%s",str);
	int len = strlen(str); int t; 
	for(int i =0; i<len; i++){
		if(str[i] == '('){
			push(1);
		}
		else if (str[i] == '{'){
			push(2);
		}
		else if (str[i] == '['){
			push(3);
		}
		else if (str[i] == ')'){
			t = pop();
			if(t != 1){
				printf("Invalid Expression \n"); return 0;
			}
		}
		else if (str[i] == '}'){
			t = pop();
			if(t!= 2){
				printf("Invalid Expression \n"); return 0;
			}
		}
		else if (str[i] == ']'){
			t = pop();
			if(t!= 3){
				printf("Invalid Expression \n"); return 0;
			}
		}

		
		
	}
	if(!isEmpty()){
		printf("invalid expression\n");
		return 0;
	}


	printf("valid expression\n");
}
