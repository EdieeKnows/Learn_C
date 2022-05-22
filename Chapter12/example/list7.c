/* rand().c -- to generate a random number */
/* use ANSI C portable algorithm */
static unsigned long int next = 1; /* seed */

unsigned int rand0(void)
{
    /* the magic formula to generate random number */
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65536) % 32768;
}
