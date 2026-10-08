#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);

    int a = 10;
    
    int *p = &a; 
    
    printf("a 的值: %d\n", a);
    printf("a 的地址 (&a): %p\n", &a);
    printf("p 存的内容 (门牌号): %p\n", p);
    printf("顺着 p 找到的值 (*p): %d\n", *p);
    
    *p = 99;
    printf("修改后, a 的值变成了: %d\n", a);

    return 0;
}