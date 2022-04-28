//Fibonacci series (0 1 1 2 3 5 8 13...)
#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,i;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	if (n==1)
	{
		printf("%d",a);
	}	
	else if (n==2)
	{
	    printf("%d %d",a,b);	
	}
	else
	{
	    printf("%d ",a);
		printf("%d ",b);
		for(i=2;i<n;i++)
		{
			
			c=a+b;
			printf("%d ",c);
			a=b;
			b=c;
		}
	}
}
