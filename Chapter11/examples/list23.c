/* quit_chk.c -- the beginning part of a programe. */
#include<stdio.h>
#include<string.h>
#define SIZE 80
#define LIM 10
#define STOP "quit"
char * s_gets(char * st, int n);

int main(void)
{
    char input[LIM][SIZE];
    int ct = 0;

    printf("Input %d lines of strings, we will store it and then print(type quit to quit).\n", LIM);
    while(ct < 10 && s_gets(input[ct], SIZE) != NULL && strcmp(input[ct], STOP) != 0)
        ct++;
    for(int i = 0; i <= ct && i < 10; i++)
        puts(input[i]);

    return 0;
}

char *s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        while(st[i] != '\n' && st[i] != '\0')
            i++;
        if(ret_val[i] == '\n')
            ret_val[i] = '\0';
        else
            while(getchar() != '\n')
                continue;
    }
    return ret_val;
}
