#include <stdio.h>

/* Initialize variables. Note that c is not less than d,
   which is one of the conditions to test for.
   Therefore, the entire expression should evalute as false. */

int a = 5, b = 6, c = 5, d = 1;
int x;

int main(void)
{
	/* Evaluate the expression wothout parentheses */

	x = a < b || a < c && c < d;
	printf("\nWithout parentheses the expression evalutes as %d", x);

	/* Evalute the expression with parentheses */
	x = (a < b || a < c) && c < d;
	printf("\nWith parentheses the expression evalutes as %d\n\n", x);

	system("pause");
	return 0;
}