//creating the file if doesn't exist
#include<stdio.h>  
void main( )  
{  
	FILE *fp ;  
	char ch ;  
	fp = fopen("file_handle.c","w") ; //it overwrites the data in each execution.
	//for adding the data use append.
	scanf("%c",&ch);//only characters.
	putc(ch,fp) ;   
	  
	fclose (fp ) ;  
}  
