/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
 *
 * https://leetcode-cn.com/problems/add-two-numbers/description/
 *
 * algorithms
 * Medium (33.31%)
 * Total Accepted:    99.5K
 * Total Submissions: 298.4K
 * Testcase Example:  '[2,4,3]\n[5,6,4]'
 *
 * 给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
 * 
 * 如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
 * 
 * 您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
 * 
 * 示例：
 * 
 * 输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
 * 输出：7 -> 0 -> 8
 * 原因：342 + 465 = 807
 * 
 * 
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*自改第一版
*两个错误：
*1.p和q不会动
*2.up没有初始化为0，导致后面+=出现问题，应该是内存泄露
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p = l1,*q=l2;
        ListNode *head = new ListNode(0),*r=head;
        if(!p)return q;
        if(!q)return p;
        int up;
        while(p||q||up){
            int sum =((l1!=NULL?l1->val:0)+(l2!=NULL?l2->val:0)+up)%10;
            r->next = new ListNode(sum);
            r=r->next;
            up = sum/10;
            if(p)p=p->next;
            if(q)q=q->next;
        }
        return head->next;
        }
};*/

//自改第二版（优化）
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0),*r=head;
        int up=0;
        while(l1!=NULL||l2!=NULL||up){
            r->next = new ListNode(((l1!=NULL?l1->val:0)+(l2!=NULL?l2->val:0)+up)%10);
            up = ((l1!=NULL?l1->val:0)+(l2!=NULL?l2->val:0)+up)/10;
            r=r->next;
            if(l1)l1=l1->next;
            if(l2)l2=l2->next;
        }
        return head->next;
        }
};
