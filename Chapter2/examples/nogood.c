// nogood.c a programe had some errors which have been fixed.
#include<stdio.h>
int main(void)
{
	int n, n2, n3;

	/* there are some errors in the programe */
	n  = 5;
	n2 = n * n;
	n3 = n2 * n2;
	printf("n = %d, n2 = %d, n3 = %d.\n", n, n2, n3);

	return 0;
}
