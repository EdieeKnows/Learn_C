/* strptr.c
string is actually a ptr */
#include<stdio.h>
int main(void) {
	puts("We are space factors");
	puts("Using different format specifier to print:");
	printf("%s, %p, %c\n", "We", "are", *"space factors");

	return 0;
}
