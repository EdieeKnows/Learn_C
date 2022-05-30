/* reduce.c - make a new file of 1/3 size of its origin. */
#include<stdio.h>
#include<stdlib.h> // provide exit()
#include<string.h> // provide strcpy(), strcat()
#define LEN 40

int main(int argc, char * argv[])
{
    FILE *in, *out;
    int ch;
    char name[LEN];
    int count = 0;

    // check arguments
    if(argc != 2)
    {
        printf("Usage: %s input_filename \n", argv[0]);
        exit(EXIT_FAILURE);
    }
    // set input
    if(((in = fopen(argv[1], "r")) == NULL))
    {
        printf("Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    // set output
    strncpy(name, argv[1], LEN - 5);
    name[LEN-5] = '\0';
    strcat(name, ".red");
    if(((out = fopen(name, "w")) == NULL))
    {
        printf("Can't create output file %s\n", name);
        exit(3);
    }
    // copy data to output file
    while((ch = getc(in)) != EOF)
        if(count++ % 3 == 0)
            putc(ch, out);
    if(fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Error in closing files\n");

    return 0;
}
