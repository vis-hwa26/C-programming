//program to implement single linked list..//
//https://github.com/vis-hwa26/C-programming//
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int value;
	struct node *next;
};

void insert_node_first();
void insert_node_last();
void insert_node_pos();
void delete_pos();
void search();
void display();

typedef struct node snode;
snode *newnode,*ptr,*prev,*temp;
snode *first=NULL,*last=NULL;

int main()
{
	int ch;
	char ans='y';
	while (ans=='y'|| ans=='Y')
	{
		printf("--------------------------------\n");
		printf("OPERATIONS ON SINGLY LINKED LIST\n");
		printf("--------------------------------\n");
		printf("1.Insert node at first\n");
		printf("2.Insert node at last\n");
		printf("3.Insert node at opt position\n");
		printf("4.Delete node from opt position\n");
		printf("5.Search node from the linked list\n");
		printf("6.Display the list\n");
		printf("7.Exit(n/N)\n");
		printf("--------------------------------");
		printf("\nEnter your choice : ");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:
			{
				printf("Inerting the node at first\n");
				insert_node_first();
				break;
			}
			case 2:
			{
				printf("Inerting the node at last\n");
				insert_node_last();
				break;
			}
			case 3:
			{
				printf("Inerting the node at position\n");
				insert_node_pos();
				break;
			}
			case 4:
			{
				printf("Deleting the node from any position\n");
				delete_pos();
				break;
			}
			case 5:
			{
				printf("searching element in the list\n");
				search();
				break;
			}
			case 6:
			{
				printf("displaying all the elements in the list\n");
				display();
				break;
			}
			case 7:
			{
				printf("-----EXITING-----");
				break;
			}
			default : 
				printf("INVALID CHOICE");
		}
		printf("\nDO YOU WANT TO CONTINUE(y/n)");
		scanf("%s",&ans);
    }
	return 0;
}

//creating a node.
snode* create_node(int val)
{
	newnode = (snode*)malloc(sizeof(snode));
	if (newnode == NULL)
	{
		printf("\nMemory is not allocated");
		return 0;
	}
	else
	{
		newnode->value = val;
		newnode->next = NULL;
		return newnode;
	}
}


//Inserting the element at first node.
void insert_node_first()
{
	int val;
	printf("Enter the value of node :");
	scanf("%d",&val);
	newnode=create_node(val);
	if (first == last && first == NULL)
	{
		first = last = newnode;
		first->next=NULL;
		last->next=NULL;
	}
	else
	{
		temp = first;//1
		first = newnode;//6
		first->next = temp;
	}
	printf("\n.......Inserted........");
}

//Inserting the element at last node.
void insert_node_last()
{
	int val;
	printf("Enter the value of node :");
	scanf("%d",&val);
	newnode=create_node(val);
	if (first == last && last == NULL)
	{
		first = last = newnode;
		first->next=NULL;
		last->next=NULL;
	}
	else
	{
		last->next = newnode;
		last = newnode;
		last->next = NULL;
	}
	printf("\n.......Inserted........");
}

//Inserting node at any position.
void insert_node_pos()
{
	int pos,val,count=0,i;
	printf("\nEnter the value of the node : ");
	scanf("%d",&val);
	newnode = create_node(val);
	printf("\nEnter the position at you want to add the node : ");
	scanf("%d",&pos);
	ptr=first;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	if (pos == 1)
	{
		if (first == last && first == NULL)
		{
			first = last = newnode;
			first->next=NULL;
			last->next=NULL;
		}
		else
		{
			temp = first;//1
			first = newnode;//6
			first->next = temp;
		}
		printf("\n.......Inserted........");
	} 
	else if (pos>1 && pos<=count)
	{
		ptr=first;
		for(i=1;i<pos;i++)
		{
			prev=ptr;
			ptr=ptr->next;
		}
		prev->next=newnode;
		newnode->next=ptr;
		printf("\n.......Inserted........");
	}  
	else
	   printf("Position is out of range");
}

//Deleting an element from the list.
void delete_pos()
{
	int pos,count=0,i;
	if (first == NULL)
	   printf("\nEMPTY LIST");
	else
	{
		printf("\nEnter the position at you want to delete : ");
		scanf("%d",&pos);
		ptr=first;
		if (pos == 1)
		{
			first=ptr->next;
			printf("\nElement deleted");
		}
		else
		{
			while (ptr != NULL)//1 2 5 ptr=null count=3
			{
				ptr=ptr->next;
				count=count+1;
			}
			if (pos > 0 && pos<=count)
			{
				ptr = first;
				for(i=1;i < pos;i++)//prev=1 ptr=2
				{
					prev=ptr;
					ptr=ptr->next;
				}
				prev->next=ptr->next;
			}
			else
			   printf("POSITION IS OUT OF RANGE");
		}
	free(ptr);
	printf("\nElement deleted");
	}   
}

//Searching an Element..
void search()
{
	int flag = 0,key,pos =0;
	if (first == NULL)
	   printf("\nEMPTY LIST");
	else
	{
		printf("Enter the value to be search : ");
		scanf("%d",&key);
		for(ptr=first;ptr != NULL;ptr=ptr->next)
		{
			pos = pos+1;
			if (ptr->value == key)
			{
				flag=1;
				break;
			}	
		}
		if (flag == 1)
		   printf("\nThe element %d found at position %d in the list",key,pos);
		else
		   printf("\nThe element %d not found in the list",key);   
	}   
}

//Displaying all the elements.
void display()
{
	if (first == NULL)
	   printf("\nEMPTY LIST");
	else
	{
		for(ptr=first;ptr != NULL;ptr=ptr->next)
		{
			printf("%d\t",ptr->value);	
		}
	}   
}
