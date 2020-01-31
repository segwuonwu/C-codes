#include <stdio.h>

int radius, area;
int x, y;

int main(void)
{
	printf("Enter radius (i.e. 10): ");
	scanf_s("%d", &radius);
	area = (int)(3.14159 * radius * radius);
	printf("\nArea = %d\n", area);

	/*for (x = 0; x < 10; x++, printf("\n"))
		for (y = 0; y < 10; y++)
			//printf("X");
			printf("%c", 1);*/

	system("pause");
	return 0;
}