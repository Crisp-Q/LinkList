#include <stdio.h>
#include <stdlib.h>
#include "linklist.h"


List CreatList(void) {
    printf("输入数字，每次一个,-1表示结束\n");
    int data;
    scanf_s("%d", &data);
    List head = (List)malloc(sizeof(ListNode));
    List tail = head;
    while (data != -1) {
        List tmp = (List)malloc(sizeof(ListNode));
        tmp->next = NULL;
        tmp->val = data;
        tail->next = tmp;
        tail = tmp;
        printf("输入数字，每次一个,-1表示结束\n");
        scanf_s("%d", &data);
    }
    return head->next;
}


int  PrintList (List p) {
    if (p == NULL) return -1;
    while (p) {
        printf("%d->", p->val);
        p = p->next;
    }
    printf("|");
    return 0;
}


