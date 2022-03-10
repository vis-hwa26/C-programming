#include<stdio.h>
#include<conio.h>
void main()
{
	double salary,tax;
	printf("Enter the salary : ");
	scanf("%lf",&salary);
	if (salary<=200000)
	    {
	    	tax=0;
	    	printf("No tax required for %lf",salary);
		}
	else if (salary>250000 && salary<=400000)
	    {
	    	tax=(salary-200000)*0.08;
	    	printf("\nTax need to pay : %lf",tax);
		}	
	getch();		
}
