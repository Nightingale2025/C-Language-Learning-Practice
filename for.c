#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    int n;
    int sum = 0;

    printf("请输入一个整数 n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
        sum = sum + i;
    }
        printf("\n");
        printf("1到 %d 的和为: %d\n", n, sum);


      return 0;
}