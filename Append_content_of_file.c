//Write a C program to append content to a file

#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	FILE *fp;
	char s[100];
	
	fp=fopen("file2.txt","a");     // a mode- only writing mode is possible create file is not possible,otherwise
	                                      // open the existing file and  write from the end of the file( do not erace the old content)
	                                      
	if(fp==NULL)
	{
		printf("file can not open");
		exit(1);
	}
	printf("enter the string\n");
	gets(s);                      // gets() use to read  the string from the keyboard input
	for(i=0;i<strlen(s);i++)
	fputc(s[i],fp);               // fputc() use to write the the charecter into file ponted by fp
	fclose(fp);
}
