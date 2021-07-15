#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Rec(int num1, int num2);
int main()
{
	int se, ga;
	printf("Enter sides : ");
	scanf("%d %d", &se, &ga);
	Rec(se, ga);
}

void Rec(int num1, int num2)
{
	int i = 0, j = 0;
	while (j<num1)
	{
		i = 0;
		while (i<num2)
		{
			printf("*");
			i++;
		}
		printf("\n");
		j++;
	}
}