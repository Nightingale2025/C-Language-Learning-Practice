#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    SetConsoleOutputCP(65001);

    struct Node *node1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *node2 = (struct Node *)malloc(sizeof(struct Node));

    node1 ->data =10;
    node2 ->data =20;

    node1 ->next = node2;
    node2 ->next = NULL;

    struct Node *p =node1;
    while (p != NULL) {
        printf("数据: %d\n",p->data);
        p = p->next;
    }    
    free(node1);
    free(node2);

    node1 = NULL;
    node2 = NULL;

    return 0;
}
