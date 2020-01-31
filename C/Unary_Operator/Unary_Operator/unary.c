/*Demonstrates unary operator prefix and postfix modes*/

#include <stdio.h>

int a, b;

int main(void)
{
	/* Set a and b both equal to 5 */

	a = b = 5;

	/* Print them, decrementing each time. */
	/* Use prefix mode for b, and postfix mode for a */

	printf("\nPost pre");
	printf("\n%d	%d", a--, --b);
	printf("\n%d	%d", a--, --b);
	printf("\n%d	%d", a--, --b);
	printf("\n%d	%d", a--, --b);
	printf("\n%d	%d\n\n", a--, --b);

	system("pause");
	return 0;
}