/* Demonstrates the use of if statement*/
#define _SECURE_NO_WARNING
#include <stdio.h>

int x, y;

int main(void)
{
	/* Inpute the two values to be tested */

	printf("\nInput an integer value for x: ");
	scanf_s("%d", &x);

	printf("\nInput an integer value for y: ");
	scanf_s("%d", &y);

	/* Test values and print result*/

	if (x == y)
		printf("\nX is equal to Y\n");
	else if (x < y)
		printf("\nX is less than Y\n");
	//if (x > y)
	else
		printf("\nX is greater than Y\n");

	system("pause");
	return 0;
}