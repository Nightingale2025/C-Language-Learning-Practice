#include <stdio.h>
#include <windows.h>    

int main()
{
    SetConsoleOutputCP(65001);

    int a,b;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);

    printf("和: %d\n", a + b);
    printf("差: %d\n", a - b);
    printf("积: %d\n", a * b);
    if (b ==0){
        printf("除数不能为零哦，笨蛋。\n");
    } else {
        printf("小数商: %.2f\n", (double)a / b);
        printf("整数商: %d,余数: %d\n", a / b, a %b);
        printf("平均值: %.2f\n", (a + b) /2.0);
    }
    return 0;
}