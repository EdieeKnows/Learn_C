#include "stdio.h"

// This is code to transfer unsign char to unsign int
int main()
{
	unsigned char mychar = '0'; //remember to use '' rather than "" which make 0 a string
	unsigned int myint = mychar - '0';

	printf("print mychar as char: %c.\nprint mychar as int:  %d.\n", mychar, mychar);
	printf("while myint is the mychar value of ASCII style minus 48\nprint myint as int: %d.\n", myint);
	printf("try something new: \'\\001\' is like: %c.\n", '\001');
	printf("print it as a int: %d\n", '\001');
}
