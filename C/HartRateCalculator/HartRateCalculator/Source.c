/*
*	Displays message about heart rate
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int pulse; //resting pulse rate for 10 sec
	int rest_heart_rate; //resting heart rate for 1 minute

	//Enter your resting pulse rate
	printf("Take your resting pulse for 10 sec. \n");
	printf("Enter your pulse rate and press enter > ");
	scanf("%d", &pulse);

	//Calculate resting heart rate for a minute
	rest_heart_rate = pulse * 6;
	printf("Your resting heart rate is %d.\n", rest_heart_rate);

	//Display message based on resting heart rate
	if (rest_heart_rate < 56)
	{
		printf("Keep up your exercise program!\n");
	}
	else
		printf("Your heart is in excellent health!\n");

	system("pause");
	return 0;
}