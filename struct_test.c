#include<stdio.h>
#include<string.h>
#include<windows.h>

struct student {
    char name[20];
    int age;
    float score;
};

int main() {
    SetConsoleOutputCP(65001);

    struct student s1;
    printf("输入学生的姓名吧: ");
    scanf("%s", s1.name);
    printf("输入学生的年龄吧: ");
    scanf("%d", &s1.age);
    printf("输入学生的成绩吧: ");
    scanf("%f", &s1.score);
    printf("普通访问: %s,%d岁,%.1f分\n", s1.name, s1.age, s1.score);
    struct student *p = &s1;
    p->age = p->age + 1;
    printf("指针访问: %s,%d岁,%.1f分\n", p->name, p->age, p->score);
    return 0;
}
