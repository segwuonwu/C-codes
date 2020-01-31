/*This program calculate the product of two numbers*/
#include <stdio.h>

int val1, val2, val3;

int product(int x, int y);

int main(void)
{
	/*Get the first number*/
	printf("Enter a number between 1 and 100 : ");
	scanf_s("%d", &val1);

	/*Get the 2nd number*/
	printf("\nEnter a number between 1 and 100 : ");
	scanf_s("%d", &val2);

	/*Calculate and display the product*/
	val3 = product(val1, val2);
	printf("%d times %d = %d\n\n", val1, val2, val3);

	system("pause");
	return 0;
}

/*Function returns the product of two values provided */
int product(int x, int y)
{
	return x * y;
}