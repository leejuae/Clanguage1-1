#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int fah = 0;
	int cel = 30;
	while (cel <= 50)
	{
		fah = (cel * 1.8) + 32;
		printf("%d��     %d��\n", cel, fah);
		cel++;

	}
	return 0;
}