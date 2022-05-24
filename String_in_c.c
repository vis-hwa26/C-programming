#include<stdio.h>
#include<string.h>
void main()
{
	char s1[15],s2[15];
	int choice,ans;
	printf("Enter the string s1 : ");
	gets(s1);
	printf("Enter the string s2 : ");
	gets(s2);
	do
	{
		printf("------------------------------------------------");
		printf("\n1.Length of the string\n2.Concatination of strings\n3.Coping of string\n4.Camparing the strings\n");
		printf("\n\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				printf("Length of s1 = %d",strlen(s1));
				printf("\nLength of s2 = %d",strlen(s2));
				break;    
			}
			case 2:
			{
				printf("CONCATINATION = %s",strcat(s1,s2));
				break;
			}
			case 3:
			{
				printf("After coping s2 to s1, s1=%s",strcpy(s1,s2));
				break;
			}
			case 4:
			{
				printf("Comparing ");
				if (strcmp(s1,s2)==0)
				{
					printf("Both are equal");
				}
				else
				    printf("Not equal");
				break;    
			}
			default:
			    printf("INVALID");	
		}
	printf("\n\tpress 26 to continue : ");
	scanf("%d",&ans);
	}while(ans == 26);
}
