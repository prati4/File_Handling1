//Write a C program to create a file and write contents, save and close the file.

#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	FILE *fp;
	char s[100];
	
	fp=fopen("file2.txt","w");     // w mode- only writing mode is possible create file is not possible,otherwise
	                                      // erase all the old content and open as blank file
	                                      
	if(fp==NULL)
	{
		printf("file can not open");
		exit(1);
		//return 0;
	}

	printf("enter the string\n");
                                             
   fgets(s,100,stdin);                               // fgets() use to read  the string from the keyboard input
	for(i=0;i<strlen(s);i++)   
   fputc(s[i],fp);                                //// fputs() use to write the the string into  specifed stream pointed by pointer            
  
	fclose(fp);
}
