#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int count_9(int x)
{
    int count = 0;
    while (1)
    {
        if (x % 10 == 9)
            count++;
        x /= 10;

        if (x == 0)
            break;

    }

    return count;
}

int main()
{
    int put, count;
    printf("5글자 이내의 숫자를 입력하시오 : \n");
    scanf("%d", &put);
    if (put >= 100000)
    {
        while (put >= 100000)
        {
            printf("다시 입력하시오 : \n");
            scanf("%d", &put);
        }
        count = count_9(put);

        printf("%d", count);
    }
    else
    {
        count = count_9(put);

        printf("%d", count);
    }

}