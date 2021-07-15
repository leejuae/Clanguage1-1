#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void call_by_value(int num)
{
	int* ptr = &num;
	num += 10;
	printf("In the call_by_value function : \n");
	printf("value : %d, Address : %p\n", num, ptr);
}

void call_by_reference(int** dptr)
{
	int* ptr1 = *dptr;
	**dptr += 10;
	printf("In the call_by_reference function : \n");
	printf("value : %d, Address : %p\n", **dptr, ptr1);
}

int main()
{
	int num = 0;
	int* ptr = &num;
	printf("The difference between 'call by reference' and 'call bt value'");
	printf("input an integer : ");
	scanf("%d", &num);

	printf("Before the call_by_value function :\n");
	printf("value : %d, Address : %p\n", num, ptr);

	call_by_value(num);

	printf("After the call_by_value function :\n");
	printf("value : %d, Address : %p\n\n", num, ptr);

	printf("Before the call_by_reference function :\n");
	printf("value : %d, Address : %p\n", num, ptr);

	call_by_reference(&ptr);

	printf("After the call_by_reference function :\n");
	printf("value : %d, Address : %p\n", num, ptr);

	return 0;
}