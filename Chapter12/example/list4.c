/* global.c -- how external variables work */
#include<stdio.h>
int units = 0;
void critic(void);
int main(void)
{
    extern int units; // optinal duplicated annoancement

    printf("How many points to make a firkin of butter?\n");
    scanf("%d", &units);
    while(units != 56)
        critic();
    printf("You must have looked it up!\n");

    return 0;
}

void critic(void)
{
    /* without optional duplicated announcement */
    printf("No luck, my friend. Try again.\n");
    scanf("%d", &units);
}
