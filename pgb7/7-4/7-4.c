#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int reference(int** sum, int** product, int num1, int num2)
{
	int ruru1=0, ruru2=0;
	int haha1 = *product;
	int haha2 = *sum;
	ruru2 = haha2 + num2;
	ruru1 = haha1 * num1;
	*product = &ruru1;
	*sum = &ruru2;
}

int main()
{
	int num1, num2;
	int* sum = &num1;
	int* product = &num2;
	printf("Input two integers : ");
	scanf("%d, %d", &num1, &num2);

	reference(&sum, &product, num1, num2);
	printf("Result : sum = %d, product = %d", *sum, *product);
}