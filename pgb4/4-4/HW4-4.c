#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sum(int num);
int main()
{
	int num1;
	printf("Enter a number between 1 and 9999 : ");
	scanf("%d", &num1);
	sum(num1);
}

void sum(int num1)
{
	int chon=0, chon1=0, bak1=0, bak=0, sip=0, ill=0;
	chon = num1 / 1000; chon1 = num1 % 1000;
	bak = chon1 / 100; bak1 = chon1 % 100;
	sip = bak1 / 10; ill = bak1 % 10;
	printf("%d", chon + bak + sip + ill);
}