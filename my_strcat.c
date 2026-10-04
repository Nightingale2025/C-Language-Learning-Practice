#include <stdio.h>
#include <windows.h>

void my_strcat(char dest[], char src[]) {
    int i = 0;
    while (dest[i] != '\0')  {
        i++;
    }
    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int main() {
    SetConsoleOutputCP(65001);
    
    char a[100]="你好啊! ";
    char b[100];
    printf("你叫什么名字呢？: ");
    scanf("%s", b);
    my_strcat(a, b);
    printf("%s\n", a);

    return 0;
}