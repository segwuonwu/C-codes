/*Demonstrates variables and constants */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*Define a constant to convert from pounds to grams */
#define GRAMS_PER_POUND 454

/*Define a constant for the start of the next century*/
const int TARGET_YEAR = 2018;

/*Declear the needed variables*/
long weight_in_grams, weight_in_pounds;
int year_of_birth, age_in_2018;

int main(void)
{
	/*Input data from user*/

	printf("Enter your weight in pounds: ");
	scanf_s("%d", &weight_in_pounds);
	printf("Enter your year of birth: ");
	scanf("%d", &year_of_birth);

	/*perform convertions */

	weight_in_grams = weight_in_pounds * GRAMS_PER_POUND;
	age_in_2018 = TARGET_YEAR - year_of_birth;

	/*Display result on the screen */

	printf("\nYour weight in grams = %ldg", weight_in_grams);
	printf("\nIn 2018 you will be %d years old\n", age_in_2018);

	system("pause");
	return 0;
}