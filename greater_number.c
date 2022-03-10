#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
main()
{
	int a,b;
	bool num;
	printf("Enter the space seperated numbers: ");
	scanf("%d",&a);
	scanf("%d",&b);
	num = a>b;
	printf("%d is greater than %d",num?a,b:b,a);
	return 0;	
	getch();	
}
