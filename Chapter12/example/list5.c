/* parta.c -- different storage classes */
// compile with partb.c
#include<stdio.h>
void report_count();
void accumulate(int k);
int count = 0; // file scopes, out link

int main(void)
{
    int value;  // auto variable
    register int i; // register variable

    printf("Enter a positive integer (0 to quit):");
    while(scanf("%d", &value) == 1 && value > 0) // scanf() return how many is read or a EOF
    {
        ++count;    // use a file scope variable
        for(i = value; i >= 0; i--)
            accumulate(i);
        printf("Enter a positive integer (0 to quit):");
    }
    report_count();

    return 0;
}

void report_count()
{
    printf("Loop executed %d times\n", count);
}
