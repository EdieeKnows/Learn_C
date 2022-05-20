/* hiding.c -- variables of Block Scope in the block */
#include<stdio.h>
int main()
{
    int x = 30;

    printf("x in outer block: %d at %p\n", x, &x);
    {
        int x = 77;
        printf("x in the inner block: %d at %p\n", x, &x);
    }
    printf("x in outer block: %d at %p\n", x, &x);
    while(x++<33)
    {
        int x = 100;
        x++;
        printf("x in while loop: %d at %p\n", x, &x);
    }
    printf("x in outer block: %d at %p\n", x, &x);

    return 0;
}
