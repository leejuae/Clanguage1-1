#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float main()
{
	float num1, num2, num3 = 0;
	printf("Enter # of hours worked (-1 to end) : \n");
	scanf("%f", &num1);
	while (num1 > 0)
	{
		if (num1 > 40)
		{
			printf("Enter houly rate of the worker ($00.00) : \n");
			scanf("%f", &num2);
			num3 = num1 * (num2 * 1.5);
			printf("%f\n", num3);
		}
		else if (0 < num1 <= 40)
		{
			printf("Enter houly rate of the worker ($00.00) : \n");
			scanf("%f", &num2);
			num3 = num1 * num2;
			printf("%f\n", num3);
		}
		printf("Enter # of hours worked (-1 to end) : \n");
		scanf("%f", &num1);
	}
	return 0;
}