#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Rec(int num1, int num2, int num3);
int main()
{
	int se, ga, dan;
	printf("Enter a character to fill the rectangle : ");
	scanf("%c", &dan);
	printf("Enter sides : ");
	scanf("%d %d", &se, &ga);
	Rec(se, ga, dan);
}

void Rec(int num1, int num2, int num3)
{
	int i = 0, j = 0;
	while (j < num1)
	{
		i = 0;
		while (i < num2)
		{
			printf("%c", num3);
			i++;
		}
		printf("\n");
		j++;
	}
}