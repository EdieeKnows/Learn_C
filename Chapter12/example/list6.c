/* partb.c -- the rest part of the programe. */
// compile with parta.c(list5.c)

#include<stdio.h>

extern int count; // reference anouncement of a out link
static int total = 0; // define a static inner link var
void accumulate(int k); // function prototype

void accumulate(int k)
{
    static int subtotal = 0; // static var without link

    if(k <= 0)
    {
        printf("loop cycle: %d\n", count);
        printf("subtotal: %d; total: %d\n", subtotal, total);
        subtotal = 0;
    }
    else
    {
        subtotal += k;
        total += k;
    }
}
