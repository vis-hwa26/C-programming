// 3x3 Matrices,then read and print an array of elements using only pointers.
//https://github.com/vis-hwa26/C-programming//
#include<stdio.h>
main()
{
	//Declaration of array.
	int a[3][3],i,j;
	int *p=&a;
	//Taking inputs from the user.
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("element - [%d],[%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//Reading and Printing the array.
	printf("\nThe matrix is : \n");
	for(i=0;i<3;i++)
	{
        printf("\n");
        for(j=0;j<3;j++)
           printf("\t%d\t",*p);
	}
	//sum of the diagonal elements. 
	int sum=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if (i=j)
				{
					int b=a[i][j];
					sum=sum+b;
			    }
		}
	}
	printf("\nThe sum of diagonal elements : %d",sum);
}
