#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()

{
    int num = 100, num2, num3 = 0;

    for (int i = 1; i <= num; i++) {
        num2 = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                num2++;
            }
        }
        if (num2 == 2) {
            printf("%d\n", i);
            num3++;
        }
    }
    printf("%d개의 소수가 있습니다.\n", num3);
}