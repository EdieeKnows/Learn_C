/* r_drive().c -- test rand() function */
/* compile with rand().c */
#include<stdio.h>
extern unsigned int rand0(void);

int main(void)
{
    int count;

    for(count = 0; count < 5; count++)
        printf("%d\n", rand0());

    return 0;
}
