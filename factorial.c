#include<stdio.h>
int facto(int num);
int main(void)
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	printf("\nFactorial of %d is %d",num,facto(num));
}

int facto(num)
{
	int factorial;
	if (num==0)
	return 0;
	else if (num==1)
	return 1;
	else
	{
		factorial=num * facto(num-1);
	}
	return factorial;
}
