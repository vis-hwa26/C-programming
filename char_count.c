//calculating frequency of character in a string..
//https://github.com/vis-hwa26/C-programming//

#include<stdio.h>
main()
{
	//1.Initialize the string..
	char string[20];
	char key;
	int i;
	int count=0;
	//2.Read the string.
	printf("Enter the string (Max. 20 characters) : ");
	gets(string);
	//3.Read the input character needs to be searched.
	printf("Enter the character you want to count : ");
	scanf("%c",&key);
	//4.Calculate the frequency of character.
	for(i=0;string[i]!='\0';i++)
	{
		if (key==string[i])
		   count++;
    }
	//5.Display the output.
	printf("\nThe frequency of %c in %s is %d",key,string,count);
}
