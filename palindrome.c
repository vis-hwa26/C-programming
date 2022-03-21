#include<stdio.h>
#include<math.h>
int reverse(int num);
int ispalindrome(int num);
main()
{
	int num;
	printf("Enter any number : ");
	scanf("%d",&num);
	if (ispalindrome(num) == 1)
	{
		printf("%d is a palindrome",num);
	}
	else
	{
		printf("%d is not a palindrome",num);
	}
	return 0;
}

ispalindrome(int num)
{
	if(num == reverse(num))
	{
		return 1;
	}
	return 0;
}

reverse(int num)
{
	int digit = (int)log10(num);
	if(num == 0)
	{
		return 0;
	}
	return ((num%10 * pow(10,digit)) + reverse(num/10));
}
