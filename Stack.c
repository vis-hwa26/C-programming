//Programme on STACK(Push,Pull,Search)...,//
//https://github.com/vis-hwa26/C-programming//
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define MAXSIZE 20
struct stack  /*Structure definition for stack.*/
{
	int stk[MAXSIZE];
	int top;
};

typedef struct stack STACK;
STACK s;

/*Function declaration/prototype.*/
void push(void);
int pop(void);
void display(void);

void main()
{
	int choice;
	int option = 1;
	s.top = -1;
	while (option==1)
	{
		printf("1. ----Push\n");
		printf("2. ----Pop\n");
		printf("3. ----Display\n");
		printf("4. ----Exit\n");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: display();
			break;
			default:printf("INVALID CHOICE");
		}
	fflush(stdin);	
	printf("\nDo you want to continue (0/1): ");
	scanf("%d",&option);	
	}
}

//Function to add element in stack.
void push()
{
	int num;
	if (s.top == MAXSIZE - 1)
	{
		printf("\nThe stack is full");
		return;
	}
	else
	{
		printf("\nEnter the element to be pushed : ");
		scanf("%d",&num);
		s.top = s.top + 1;
		s.stk[s.top] = num;
	}
	return;
}

//Function to delete element in stack.
int pop()
{
	int num;
	if (s.top == -1)
	{
		printf("\nThe stack is EMPTY");
		return (s.top);
	}
	else
	{
		num=s.stk[s.top];
		printf("\nThe element popped out is : %d",s.stk[s.top]);
		s.top = s.top - 1;
	}
	return(num);
}

//Displaying all Elements in stack.
void display()
{
	int i;
	if (s.top == 1)
	{
		printf("\nThe stack is EMPTY");
	}
	else 
	{
		printf("\nThe elements in stack are : \n");
		for(i=s.top;i >= 0 ;i--)
		{
			printf("\t%d\n",s.stk[i]);
		}
	}
	printf("\n");
}

