//maximum number out of three number using ternary operator...
#include<stdio.h>
void main()
{
	int a,b,c,t,max;
	printf("Enter the three number : ");
	scanf("%d %d %d",&a,&b,&c);
	t=(a>b)?a:b;
	max=(t>c)?t:c;
	printf("The maximum number is %d",max);
}
