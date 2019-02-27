#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>


/* Function to print reverse of the passed string */
void reverse(char* str)
{
	if (*str)
	{
		reverse(str + 1);
		printf("%c", *str);
		
	}
}

/* Driver program to test above function */
int main()
{
	char a[100];
	printf("Enter the string to reverse: ");
	scanf("%s", &a);
	reverse(a);
	printf("\n");

	system("pause");
	return 0;
}