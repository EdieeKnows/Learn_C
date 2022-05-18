/* fgets1.c -- instead of using get(), we use fgets() */

#include<stdio.h>
#define STLEN 14

int main(void)
{
    char words[STLEN];

    puts("Please give me a string:");
    fgets(words, STLEN, stdin);
    puts("we will use puts() and then fputs()");
    puts(words);
    fputs(words,stdout);
    printf("Address of the string is: %p\n", words);
    puts("Please enter another string:");
    fgets(words, STLEN, stdin);
    puts(words);
    fputs(words,stdout);
    printf("Address of the string is: %p\n", words);

    return 0;
}
