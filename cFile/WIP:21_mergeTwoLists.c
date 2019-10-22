#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct ListNode {
    int val;
    struct ListNode *next;
}Linkedlist;

struct ListNode* mergeTwoLists(struct Linkedlist* l1, struct Linkedlist* l2){
    /* 递归 */
    // if (l1 == NULL) return l2;
    // if (l2 == NULL) return l1;
    // if (l1->val < l2->val) {
    //     l1->next = mergeTwoLists(l1->next,l2);
    // } else {
    //     l2->next = mergeTwoLists(l1,l2->next);
    // }
    /*  */
    if (l1 == NULL | l2 == NULL) return l1;
    /* 超出时间限制 */
    Linkedlist *t1 ;
    Linkedlist *t2 ;
    while (l2->next != NULL) {
        t1 = l1->next;
        t2 = l2->next;
        if (l2->val < l1->val) {
            l1 = l2->next;
            l2 = t2;
        } else if (t1->val < l2->val && l1->val < l2->val) {
            l1 = l1->next;
        } else if (t1->val >= l2->val && l1->val < l2->val) {
            t1 = l2->next;
            l2 = l1->next;
            l1 = l2;
            l2 = t2;
        }
    }





        while (t1->val < t2->val) {
            if (t1->next == NULL) {
                t1->next = l2;
            }
            t1 = t1->next;
            }
        l1 = t1;
        l2 = l2->next;
        t1->next = t2->next;
        t2 = t1->next;
        t2 = l2;
    }
    return l1;
}

int main(){
    Linkedlist *list1;

}

/*将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 

示例：

输入：1->2->4, 1->3->4
输出：1->1->2->3->4->4

*/