/* nono.c -- DON'T DO THIS */
#include<stdio.h>
int main(void)
{
    char side_a[] = "Side A";
    char dont[] = {'F', 'U', 'C', 'K'};
    char side_b[] = "Side B";

    puts(dont); // dont is not a string!

    return 0;
}
