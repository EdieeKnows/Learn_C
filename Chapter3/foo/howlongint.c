#include<stdio.h>

int main() {
	int num1 = -2147483648;
	int num2 = 2147483647;
	unsigned int num3 = 4294967295;

	printf("num1 = %#o\nnum2 = %#o\nnum3 = %o", num1, num2, num3);
	return 0;
}
