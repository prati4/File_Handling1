//Write a C program to read file contents and display on console.	

#include<stdio.h>
#include<string.h>
int main()
{
int i;
	FILE *fp;
	
	fp=fopen("file2.txt","r");
	if(fp==NULL)
	{
		printf("file can not open");
		exit(1);
	}

	char c = fgetc(fp);        // it fgetc return the charecter which is locate in file of first bite, After reading the character, 
                              //	the file pointer is advanced to next character. 
	                            
	                        
   while (c != EOF) {
      printf("%c",c);          
      c = fgetc(fp);
   }
   fclose(fp);
}
