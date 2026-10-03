#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(65001);

    int n;

    printf("输入一个整数喵：");
    scanf("%d", &n);

    while (n > 0)
    {
        printf("%d ", n);
        n--;
    }
    printf("\n爱你哦\n");
    return 0;
}