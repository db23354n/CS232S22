#include <stdio.h>

int a=3;
int b=2;
long c=a+b;

int main(void) {
	printf("%lu bytes needed to store a char\n", sizeof(char));
	printf("%lu bytes needed to store a short\n", sizeof(short));
	printf("%lu bytes needed to store an int\n", sizeof(int));
	printf("%lu bytes needed to store a long\n", sizeof(long));
	printf("%lu bytes needed to store a double\n", sizeof(double));
	return 0;
}
