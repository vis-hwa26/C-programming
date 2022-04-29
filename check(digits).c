/* Write a c program to print "TRUE" if the given number's right most digit 
   is odd and second last right digit is even otherwise "FALSE" .. */
#include<stdio.h>
void main()
{
	int a[5];
	printf("(seprated with space)Enter the 5 digit number : ");
	scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	if (a[4]%2!=0 && a[3]%2==0)
	{
		printf("TRUE");
	}
	else
	    printf("FALSE");  
	return 0;    
}   
