// p5.c prints toes^1 toes^2 toes^3
#include<stdio.h>
int main(void)
{
	int toes, toes2, toes3;

	toes = 10;
	toes2 = toes * toes;
	toes3 = toes * toes * toes;
	printf("toes = %d, toes2 = %d, toes3 = %d.\n", toes, toes2, toes3);

	return 0;
}
