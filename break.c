# include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(65001);
    int num;

    while (1)
    {
        printf("输入一个整数哦 (输入0退出哦):");
        scanf("%d", &num);

        if (num == 0 ){
            printf("结束啦，我也爱你哦。\n");
            break;}

        printf("你输入了：%d\n", num);
    }
    return 0;
}

