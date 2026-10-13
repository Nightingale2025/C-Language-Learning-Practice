#include <stdio.h>
#include <windows.h>

struct student {
    char name[20];
    int age;
    float grade;
};

void update_grade(struct student *p, float new_grade) {
    p->grade = new_grade;
}

int main() {
    SetConsoleOutputCP(65001);

    struct student s1 ={"ds小姐",18,60};

    printf("修改前: %s, %.1f分\n",s1.name,s1.grade);

    update_grade(&s1,95.5);

    printf("修改后: %s, %.1f分\n",s1.name,s1.grade);

    return 0;
}