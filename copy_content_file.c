
 // C program to copy contents of one file to another.
 

#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fp1;
    FILE *fp2;
    
     char ch;
     // Open one file in 'r' and 
     // open another file in 'w' mode 
     
    fp1  = fopen("fileread.txt", "r");
    fp2    = fopen("filewrrite.txt", "w");

    /* fopen() return NULL if unable to open file in given mode. */
    if (fp1== NULL || fp2 == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nUnable to open file.\n");

        exit(1);
    }


     // Copy file contents character by character.
    
    ch = fgetc(fp1);
    while (ch != EOF)
    {
        //Write to file
        fputc(ch, fp2);

        // Read next character from file */
        ch = fgetc(fp1);
    }


    printf("\nFiles copied successfully.\n");


    /* Finally close files to release resources */
    fclose(fp1);
    fclose(fp2);

    return 0;
 }

