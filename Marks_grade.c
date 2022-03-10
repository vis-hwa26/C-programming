/*Assigning grades according to the marks */
/*https://github.com/vis-hwa26/C-programming*/
#include<stdio.h>
#include<conio.h>
main()
{
	double marks=0;
	printf("Enter your marks obtained out of 100 : ");
	scanf("%lf",&marks);
	if (marks<40)
	    {
	    	printf("U scored %lf \n",marks);
	    	printf("Your grade is E");
		}
	else if (marks>=40 && marks<=54)
	    {
	    	printf("U scored %lf \n",marks);
	    	printf("Your grade is D");
		}
	else if (marks>=55 && marks<=69)
	    {
	    	printf("U scored %lf \n",marks);
	    	printf("Your grade is C");
		}	
	else if (marks>=70 && marks<=84)
	    {
	    	printf("U scored %lf \n",marks);
	    	printf("Your grade is B");
		}	
	else if (marks>=85 && marks<=100)
	    {
	    	printf("U scored %lf \n",marks);
	    	printf("Your grade is A");
		}
	else 
	    {
	    	printf("U were absent in the exam");
		}
	getch();				
}
