//Program on queue...
//https://github.com/vis-hwa26/C-programming
#include<stdio.h>
#include<conio.h>
#define SIZE 5

int front=-1;
int rear=-1;
int q[SIZE];

void insert();
void del();
void display();

int main()
{
	int choice;
	do
	{
		printf("\n1. ----Insert");
		printf("\n2. ----Delete");
		printf("\n3. ----Display");
		printf("\n4. ----Exit\n");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: insert();
			break;
			case 2: del();
			break;
			case 3: display();
			break;
			case 4:
				printf("program ended .Press any key to exit.");
				getch();
		}
	}while(choice!=4);
}

//For inserting in element in queue.
void insert()
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	if (rear < SIZE-1)
	{
		q[++rear]=num;
		if (front==-1)
		   front=0;
	}
	else
	   printf("\nQueue overflow");
}

//for deleting an element in queue.
void del()
{
	if (front==-1)
	{
		printf("\nQueue underflow");
		return;
	}
	else
	{
		printf("The deleted element is : %d",q[front]);
	}
	if (front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		front=front+1;
	}
}

//Displaying elements from Queue.
void display()
{
	int i;
	if (front==-1)
	{
		printf("\nQueue is EMPTY");
		return;
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("\t%d",q[i]);
		}
	}
}
