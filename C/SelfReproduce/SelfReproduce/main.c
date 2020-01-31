#include <stdio.h>

char s[] = {'\t', '0', '\n', '}', ';', '\n', '\n', '/', '*', '\n', 9, 0 };

/*
 * The string s is a representation of the body
 * of thsi program from '0' to the end.
 */

int main(void)
{
	int i;

	printf("char\ts[] = {\n");
	for (i = 0; s[i]; i++)
		printf("\t%d, \n", s[i]);
	printf("%s", s);

	system("pause");
	return 0;
}