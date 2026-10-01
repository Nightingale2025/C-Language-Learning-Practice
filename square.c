#include <stdio.h>
#include <windows.h>

int square(int n) {
    return n * n;
}

int main()
{
    SetConsoleOutputCP(65001);

    int num;
    
    printf("输入一个整数喵：");
    scanf("%d", &num);
    int result = square(num);
    printf("%d 的平方是：%d\n",num, result);

    return 0;
}