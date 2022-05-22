/* s_and_r.c -- file including rand1() and srand1() */
/* use ANSI C portable algorithm */
// #include<stdio.h>
static unsigned long int next = 1; /* seed */

unsigned int rand1(void)
{
    /* the magic formula to generate random number */
    //printf("next = %ld\n", next);
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65536) % 32768;
}

void srand1(unsigned int seed)
{
    next = seed;
    //printf("srand1(seed):   the next has been reset to %ld\n", next);
}
