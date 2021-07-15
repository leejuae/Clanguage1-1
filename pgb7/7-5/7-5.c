#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int, int);
void main(void)
{
	int array[10];
	int i, num1, num2;

	for (i = 0; i < 10; i = i + 1)
		array[i] = i;
	printf("Welcome to the Swap World!\n");
	while (1) {
		printf("** Array Contents **\n");
		for (i = 0; i < 10; i = i + 1)
			printf("array[%d] %d\n", i, array[i] * 10);
		printf("Select two indexes for swap: ");
		scanf("%d %d", &num1, &num2);
		if (num1 < 0)
			break;
		swap(array, array, num1, num2);
	}

}

void swap(int *arr, int *arr2, int a, int b)
{
	int temp = arr[a];
	arr[a] = arr2[b];
	arr2[b] = temp;
}