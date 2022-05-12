/* create by xyz, 12/05/22.
   input a char type value, transfer it to its decimal format in int type.
*/
#include <stdio.h> // provide printf() and scanf()

int main() {
	char c;
	int result;
	printf("Please give your ASCII value:\n");
	scanf("%c", &c);
	printf("Your input is scaned as char, print as: %c\n", c);
	printf("Your value printed in int type as: %d\n", c);
	return 0;
}
