/* compareback.c -- return val of strcmp() */
#include<stdio.h>
#include<string.h>
int main(void)
{
    printf("strcmp(\"A\", \"A\") is %d.\n",
            strcmp("A", "A"));
    
    printf("strcmp(\"A\", \"B\") is %d.\n",
            strcmp("A", "B"));

    printf("strcmp(\"B\", \"A\") is %d.\n",
            strcmp("B", "A"));

    printf("strcmp(\"C\", \"A\") is %d.\n",
            strcmp("C", "A"));

    printf("strcmp(\"Z\", \"a\") is %d.\n",
            strcmp("Z", "a"));

    printf("strcmp(\"apples\", \"apple\") is %d.",
            strcmp("apples", "apple"));

    return 0;
}
