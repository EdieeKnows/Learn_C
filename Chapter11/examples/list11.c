/* scan_str.c -- use scanf() */
#include<stdio.h>
int main(void)
{
    char name1[11], name2[11];
    int count;

    printf("Please enter 2 names.\n");
    count = scanf("%5s %10s", name1, name2);
    printf("We get %d names, the first is %s and the second is %s.\n", count, name1, name2);

    return 0;
}
