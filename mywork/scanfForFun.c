/* scanfForFun -- to see some behaviour of scanf() in stdio.h */
#include<stdio.h>
#define WLEN 80

int main(void)
{
    int number;
    char str[WLEN];

    puts("Ya, put a word and a number here, bro.");
    if(scanf("%80s %d", str, &number) == 2)
        printf("Here we are, we have a word: %s."
                " And a number %d.\n", str, number);
    else
        puts("Can not read, bro.");

    return 0;
}
