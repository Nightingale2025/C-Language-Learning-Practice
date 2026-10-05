#include <stdio.h>
#include <windows.h>

int my_strcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return 0;
}
int main() {
    SetConsoleOutputCP(65001);
    char str1[100];
    char str2[100];
    printf("输入第一个字符吧: ");
    scanf("%s", str1);
    printf("输入第二个字符吧: ");
    scanf("%s", str2);
    int result = my_strcmp(str1, str2);
    if (result < 0) {
        printf("字符串 \"%s\" 小于字符串 \"%s\"\n", str1, str2);
    } else if (result > 0) {
        printf("字符串 \"%s\" 大于字符串 \"%s\"\n", str1, str2);
    } else {
        printf("字符串 \"%s\" 等于字符串 \"%s\"\n", str1, str2);
    }
    return 0;
    }