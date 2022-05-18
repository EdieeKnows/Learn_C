/* fgets2.c -- use fgets() and fputs() */
/* try to input something intersting:
 * 1. a string of 9 long.
 * 2. a string of 8 long.
 * 3. a string longer than 9 but not divided by 9.
 * 4. a string longer than 9 and divided by 9.
 */
#include<stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];

    puts("Please enter your words(smaller than 8 charactor), enter a empty line to stop:");
    while(fgets(words, STLEN, stdin) != NULL && words[0] != '\n'){
        //puts("Your input was:");
        fputs(words, stdout);
    }
    puts("Done");

    return 0;
}
