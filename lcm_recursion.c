/* C program to find LCM of two numbers using recursion*/
 //https://github.com/vis-hwa26/C-programming//
#include <stdio.h>


/* Function declaration */
int lcm(int a, int b);


int main()
{
    int num1, num2, LCM;

    /* Input two numbers from user */
    printf("Enter first number to find lcm: ");
    scanf("%d", &num1);
    printf("Enter second number to find lcm: ");
    scanf("%d", &num2);
    
    /*
     * Ensures that first parameter of LCM function 
     * is always less than second 
     */
    if(num1 > num2)
        LCM = lcm(num2, num1);
    else
        LCM = lcm(num1, num2);
        
    printf("LCM of %d and %d = %d", num1, num2, LCM);
    
    return 0;
}


int lcm(int a, int b)
{
    static int multiple = 0;
    
    /* Increments multiple by adding max value to it */
    multiple += b;
    
    
    if((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else 
    {
        return lcm(a, b);
    }
}
