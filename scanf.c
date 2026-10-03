#include <stdio.h>
#include <windows.h>    

int main(void)
{
    SetConsoleOutputCP(65001);
   int age;

    printf("请输入年龄：");
    scanf("%d", &age);
    printf("你今年%d岁。\n", age);
    
    return 0;
}