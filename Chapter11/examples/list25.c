/* copy1.c -- demostrate strcpy() */
#include<stdio.h>
#include<string.h>
#define SIZE 40
#define LIM 5
char * s_gets(char * st, int n);

int main()
{
    char qwords[LIM][SIZE];
    char tempWord[SIZE];
    int ct = 0;

    puts("Give me some strings, if it is started with a 'q',"
            "it will be stored in the list.");
    while(ct < LIM && s_gets(tempWord, SIZE) != NULL && tempWord != '\0')
        if(strncmp(tempWord, "q", 1) == 0)
        {
            strcpy(qwords[ct], tempWord);
            ct++;
        }
    for(int i = 0; i <= ct && i < LIM; i++)
        puts(qwords[i]);

    return 0;
}

char *s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        while(ret_val[i] != '\n' && ret_val[i] != '\0')
            i++;
        if(ret_val[i] == '\n')
            ret_val[i] = '\0';
        else
            while(getchar() != '\n')
                continue;
    }
    return ret_val;
}
