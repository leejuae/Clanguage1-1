#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char a = "a"; int b = 10; double c = 3.14;
	char* p1 = &a; int* p2 = &b; double* p3 = &c;
	
	*p1 += 1; *p2 += 1; *p3 += 1;

	printf("a : %c ,b : %d ,c : %If\np1 : %p ,p2 : %p ,p3 : %p", a, b, c, *p1, *p2, *p3);

	return 0;
}