/*To check a number is a prime number or not using recursion*/
//https://github.com/vis-hwa26/C-programming//

#include <stdio.h>

int checkPrime(int num, int i)
{
    if (i != 1) {
        if (num % i != 0) {
            return checkPrime(num, i - 1);
        }
        else {
            return 0;
        }
    }
    else {
        return 1;
    }
}

int main()
{
    int num = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (checkPrime(num, num / 2) == 1)
        printf("Given number %d is prime number",num);
    else
        printf("Given number %d is not prime number",num);

    return 0;
}
