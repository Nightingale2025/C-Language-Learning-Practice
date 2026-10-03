#include <stdio.h>
#include <windows.h>

int my_strlen(char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }
    return count;
}
int main() {
     SetConsoleOutputCP(65001);
     printf("输入一个字符串吧: ");
     char character[100];
     scanf("%s", character);

    int len = my_strlen(character);
    printf("字符串 \"%s\" 的长度是：%d\n", character, len); 

    return 0;
}