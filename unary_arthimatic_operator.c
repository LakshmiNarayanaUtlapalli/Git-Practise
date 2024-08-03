// C program to demonstrate
// working of binary arithmetic
// operators
#include <stdio.h>

int main()
{
	int a = 10, b = 4, res;


	res = a++;
	printf("a is %d and res is %d\n", a,
		res); // a becomes 11 now


	res = a--;
	printf("a is %d and res is %d\n", a,
		res); // a becomes 10 now


	res = ++a;
	
	// a and res have same values = 11
	printf("a is %d and res is %d\n", a, res);


	res = --a;
	
	// a and res have same values = 10
	printf("a is %d and res is %d\n", a, res);

	return 0;
}