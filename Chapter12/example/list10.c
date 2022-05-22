/* r_driver1.c -- test rand1() and srand() */
/* compile with s_and_r.c */
#include<stdio.h>
#include<stdlib.h>
extern void srand1(unsigned int seed);
extern int rand1(void);

int main(void)
{
    int count;
    unsigned seed;

    printf("Please enter your choice for seed.\n");
    while(scanf("%u", &seed) == 1)
    {
        // printf("seed = %d\n", seed);
        srand1(seed);
        for(count = 0; count < 5; count++)
            printf("%d\n", rand1());
        printf("Please enter your choice for seed.\n");
    }
    printf("Done\n");

    return 0;
}
