#include<stdio.h>
#include<conio.h>
main()
{
	char name[20];
	int age;
	printf("Enter your name : ");
	scanf("%s",name);
	printf("Enter your Age : ");
	scanf("%d",&age);
	printf("Your name is %s and your age is %d",name,age);
	return 0;
}
