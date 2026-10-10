#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);

    int score;
    printf("输入你的分数吧: ");
    scanf("%d",&score);

    if(score < 0 || score > 100){
        printf("输入不合法哦, 笨蛋。\n");
        return 0;
    }

    int level = score / 10;
    switch(level){
        case 10:
        case 9:
            printf("等级: A\n");
            break;
        case 8:
            printf("等级: B\n");
            break;
        case 7:
            printf("等级: C\n");
            break;          
        case 6:
            printf("等级: D\n");
            break;
        default:
            printf("等级: E\n");
            break;
    }
    return 0;
}