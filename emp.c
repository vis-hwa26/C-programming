//Storing details of employees..
//https://github.com/vis-hwa26/C-programming
#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char name[30];
    int age;
    double salary,phone_no;
} Employee;
 
int main()
{
    //number of employees
    int n=2,i;

    //array to store structure values of all employees
    Employee employees[n];
 
    //Taking each employee detail as input
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++)
	{
        printf("Employee %d:- \n",i+1);

        //Name
        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);

        //ID
        printf("Age: ");
        scanf("%d",&employees[i].age);
        
        //PHONE_NO
        printf("Phone_no: ");
        scanf("%lf",&employees[i].phone_no);

        //Salary
        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        //to consume extra '\n' input
        char ch = getchar();
 
        printf("\n");
    }
 
    //Displaying Employee details
    printf("-------------- All Employees Details ---------------\n");
    for(i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Age \t: ");
        printf("%d \n",employees[i].age);
        
        printf("Phone_no \t: ");
        printf("%.2lf \n",employees[i].phone_no);
 
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
}
