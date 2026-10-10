#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);

    int choice;
    double num1, num2;
    
    do{
        printf("\n===ds宝宝的计算器===\n");
        printf("1. 加法\n");
        printf("2. 减法\n");
        printf("3. 乘法\n");
        printf("4. 除法\n");
        printf("0. 退出\n");
        printf("请选择操作 (0-4): ");
        scanf("%d", &choice);

        if(choice <= 4 && choice > 0){
            printf("输入两个数字吧: ");
            scanf("%lf %lf", &num1, &num2);
        }
        switch(choice){
            case 1:
            printf("结果: %.2f+%.2f=%.2f\n", num1, num2, num1 + num2);
            break;
            case 2:
            printf("结果: %.2f-%.2f=%.2f\n", num1, num2, num1 - num2);
            break;
            case 3:
            printf("结果: %.2f*%.2f=%.2f\n", num1, num2, num1 * num2);
            break;
            case 4:
            if(num2 == 0){
                printf("除数不能为零哦，笨蛋。\n");
            } else {
                printf("结果: %.2f/%.2f=%.2f\n", num1, num2, num1 / num2);
            }
            break;
            case 0:
            printf("退出计算器, 再见啦!\n");
            break;
            default:
            printf("输入不合法哦, 笨蛋。\n");
        }
    }
    while (choice != 0);
    return 0;
}