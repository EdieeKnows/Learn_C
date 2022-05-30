/* count.c -- use strandard I/O */
#include<stdio.h>
#include<stdlib.h> // provide with exit()

int main(int argc, char * argv[])
{
    int ch; // variable to store each character
    FILE *fp; // file pointer
    unsigned long count = 0;
    if(argc != 2)
    {
        printf("Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fp = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    if(fclose(fp) != 0)
        printf("Error in closing file %s\n", argv[1]);
    printf("\nFile %s has %lu characters\n", argv[1], count);

    return 0;
}
