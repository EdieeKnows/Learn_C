/* fgets3.c -- use fgets() */
#include<stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];
    int i;

    puts("Enter a string no matter how long(we will remove the \\n and longer part:))");
    while(fgets(words, STLEN, stdin) != NULL && words[0] != '\n'){
        i = 0;
        while(words[i] != '\n' && words[i] != '\0')
            i++;
        if(words[i] == '\n')
            words[i] = '\0';
        else
            while(getchar() != '\n')
                continue;
        puts("Look, now we can use puts() to print your input:");
        puts(words);
    }
    puts("done");
    return 0;
}
