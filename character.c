#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);

    char greeting[] = "Hello";

    printf("字符串: %s\n", greeting);

    for (int i = 0; greeting[i] != '\0'; i++) {
        printf("第 %d 个字符: %c\n", i, greeting[i]);
    }

    return 0;
}