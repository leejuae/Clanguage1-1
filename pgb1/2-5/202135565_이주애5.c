#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num1 = 0;
    printf("숫자를 입력하시오 : \n");
    scanf("%d", &num1);
    printf("아스키코드 값: %c \n", num1);

    return 0;
}