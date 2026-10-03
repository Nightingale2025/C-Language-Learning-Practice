#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);  // 让终端用 UTF-8 显示
    int age = 18;
    double height = 1.72;
    char grade = 'A';

    printf("Age: %d\n", age);
    printf("Height: %.2f米\n", height);
    printf("Grade: %c\n", grade);

   return 0;
}