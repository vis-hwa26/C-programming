/*Swapping numbers without using a temporary variable..*/
#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("Enter the value a : ");
	scanf("%d",&a);
	printf("Enter the value b : ");
	scanf("%d",&b);
	a = a+b;
	b = a-b;
	a = a-b;
	printf("After swapping value of a is %d and b is %d",a,b);
}
