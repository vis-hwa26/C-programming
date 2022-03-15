/* C program for Palindrome pyramid pattern printing using numbers */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,k;
	printf("Enter the number of rows : ");
    scanf("%d",&n);
    printf(" ");
    for(i = 1; i <= n; i++)
       {
       	for(j=1;j<=i;j++)
		   {
		   	printf("%d",j);
		   }
		for(k=i-1;k>=1;k--)
	   	   {
	   	   	printf("%d",k);
		   }   
		printf(" ");   
		printf("\n");   
	   }   
}

