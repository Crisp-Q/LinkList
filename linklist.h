

#ifndef __LISTNODE__
#define __LISTNODE__

typedef struct ListNode {
    int val;
    struct ListNode* next;
}ListNode, *List;

List CreatList(void);
int  PrintList(List p);

#endif // __LISTNODE__
