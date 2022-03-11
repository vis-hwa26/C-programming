//Using switch instead of if-else...
//https://github.com/vis-hwa26/C-programming
#include<stdio.h>
main()
{
	int choice=0;
	printf("Enter your choice : ");
	scanf("%d",&choice);
	switch(choice)
	//Different choices of food
	    {
	    	case 1 :
	    		{
	    			printf("Food item-French Fries");
	    			printf("\nPrice - Rs 99");
					break;	
				}
			case 2 :
	    		{
	    			printf("Food item-Pizza");
	    			printf("\nPrice - Rs 239");	 
	    			break;
				}
			case 3 :
	    		{
	    			printf("Food item-Pasta");
	    			printf("\nPrice - Rs 179");	
	    			break;
				}
			case 4 :
	    		{
	    			printf("Food item-Sandwich");
	    			printf("\nPrice - Rs 149");
					break;	
				}
			case 5 :
	    		{
	    			printf("Food item-Burgur");
	    			printf("\nPrice - Rs 129");
					break;	
				}
			default :
			    printf("Choice is invalid");					
		}
}
