#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Swap(int** dp1, int** dp2)
{
	int* swap = *dp1;
	*dp1 = *dp2;
	*dp2 = swap;
}

int main()
{
	int a = 10, b = 20;
	int* p1 = &a; int* p2 = &b;

	Swap(&p1, &p2);
	printf("a : %d, b : %d, p1 : %p, p2 : %p", a, b, *p1, *p2);
}