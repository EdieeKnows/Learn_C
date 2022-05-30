/* readint.c -- read the int val from Data1 */
// the val is 8 bytes long, so it's a long type
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    char val;
    FILE * fp;

    if((fp = fopen("Data1", "r")) == NULL)
    {
        puts("Can't open Data1");
        exit(EXIT_FAILURE);
    }

    if(fread(&val, 1, 1, fp) != 1)
    {
        fprintf(stderr, "Error in reading the file.\n");
        exit(EXIT_FAILURE);
    }

    printf("We got it! The val = %d\n", val);

    if(fclose(fp) != 0)
    {
        fprintf(stderr, "Error in closing the file.\n");
        exit(EXIT_FAILURE);
    }

    return 0;
}
