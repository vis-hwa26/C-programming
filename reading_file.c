#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch[30];
   FILE *fp;

   if ((fp = fopen("file_handle.c","r")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

   fscanf(fp,"%s", &ch);

   printf("%s", ch);
   fclose(fp); 
  
   return 0;
}
