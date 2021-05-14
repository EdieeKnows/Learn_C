/* two_func.c a programe containing two functions */
#include<stdio.h>
void bulter(void); /* ANSI/ISO C函数原型 */
int main(void)
{
	printf("I will summon the bulter function.\n");
	bulter();
	printf("Yes. Bring me some tea and writeable DVDs.\n");

	return 0;
}
void bulter(void)
{
	printf("You rang, sir?\n");
}
