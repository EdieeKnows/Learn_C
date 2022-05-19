/* put1.c -- print strings without add \n */
#include<stdio.h>
#define STLEN 50
void put1(const char * string)
{
    while(* string != '\0')
        putchar(*string++);
}

int main(void)
{
    char words[STLEN];

    while(fgets(words, STLEN, stdin) != NULL && words[0] != '\n'){
        put1(words);
    }
    puts("Done");
    return 0;
}
