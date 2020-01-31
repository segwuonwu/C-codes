/* Demonstrates function recursion. Calculates the 
*  factorial of a number. */
#define _SECURE_NO_WARNINGS

#include <stdio.h>

unsigned int f, x;
unsigned int factorial(unsigned int a);

int main(void)
{
	puts("Enter an integer value between 1 and 8: ");
	scanf_s("%d", &x);

	if (x > 8 || x < 1)
	{
		printf("Only values from 1 to 8 are acceptable!");
	}
	else
	{
		f = factorial(x);
		printf_s("%u factorial equals %u\n\n", x, f);
	}

	system("pause");
	return 0;
}

unsigned int factorial(unsigned int a)
{
	if (a == 1)
		return 1;
	else
	{
		a *= factorial(a - 1);
		return a;
	}
}