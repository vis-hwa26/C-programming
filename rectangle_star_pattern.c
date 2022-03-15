//Making rectangle/square of user input rows and columns....//
//https://github.com/vis-hwa26/C-programming//
#include<stdio.h>
int main()
{
	int i,r,c,j;
	printf("Enter the number of columns you want : ");
	scanf("%d",&c);
	printf("Enter the number of rows you want : ");
	scanf("%d",&r);
	for(j=1;j<=r;j++)
		   {
			printf("\n");
		   	for(i=1;i<=c;i++)
			   {
			   	printf("* ");
			   }
		   }   
}
