// arrchar.c -- ptr array and char type array
#include<stdio.h>
#define SLEN 40
#define LIM 5
int main(void)
{
	const char *mytalents[LIM] = {
		"Adding numbers swiftly",
		"Multiplying accurately",
		"Stashing data",
		"Following instructions to letter",
		"Understanding the C language"
	};
	char yourstalents[LIM][SLEN] = {
		"Walking in a straight line",
		"Sleeping", "Watching television",
		"Mailing letters", "Reading email"
	};
	int i;

	puts("Let's compare talents.");
	printf("%-36s %-25s\n", "My talents", "Your talents");
	for (i = 0; i < LIM; i++)
		printf("%-36s %-25s\n", mytalents[i], yourstalents[i]);
	printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n",
		sizeof(mytalents), sizeof(yourstalents));

	return 0;
}
