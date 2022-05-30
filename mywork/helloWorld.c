// helloWorld.c -- a overdesigned programe to print "Hello world!"
#include<stdio.h>
#include<string.h>
#define HELLO "Hello, world!"
#define STLEN 80

static char res_str[STLEN];

int main()
{
    extern char res_str[];

    strcpy(res_str, HELLO);
    printf("before concat, the length of str is %d\n", (int) strlen(res_str));
    printf("with a size of %d\n", (int) sizeof(res_str));
    strcat(res_str, "\n");
    printf("now the length of str is %d\n", (int) strlen(res_str));
    printf("with a size of %d\n", (int) sizeof(res_str));

    fputs(res_str, stdout);

    return 0;
}
