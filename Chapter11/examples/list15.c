/* put2.c -- print a string and return the number of chars in the string. */
#include<stdio.h>
int put2(const char * string)
{
    int count = 0;
    while(*string)
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');
    return(count);
}
