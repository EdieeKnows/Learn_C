/*reverse.c -- reverse the file content */
#include<stdio.h>
#include<stdlib.h>
#define CNTL_Z '\032' /* the sign of end of file in DOS system */
#define SLEN 81
int main(void)
{
    char file[SLEN];
    char ch;
    FILE *fp;
    long count, last;

    puts("Enter the name of the file to be processed:");
    scanf("%80s", file);
    if((fp = fopen(file, "rb")) == NULL)
    {
        printf("reverse can't open %s\n", file);
        exit(EXIT_FAILURE);
    }


    fseek(fp,0L,SEEK_END); // go to the end of the file
    last = ftell(fp);
    for(count = 1L; count <= last; count++)
    {
        fseek(fp, -count, SEEK_END);
        ch = getc(fp);
        if(ch != CNTL_Z && ch != '\r')
            putchar(ch);
    }
    putchar('\n');
    fclose(fp);

    return 0;
}
