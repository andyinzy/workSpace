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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr = l1;
        int count = 0;//count the num of exponent of 10
        long sum = 0;
        int max ;
        while(curr!=nullptr){
            if(curr->next != nullptr){
                curr = curr->next;
                count++;
            }
        }
        ListNode* curr = l1;
        max = count;
        for(int i =count; i>=0;i--){
            sum += curr->val * pow(10,i);
            curr = curr->next;
        }
        count = 0;
        ListNode* curr = l2;
        while(curr!=nullptr){
            if(curr->next != nullptr){
                curr = curr->next;
                count++;
            }
        }
        ListNode* curr = l2;
        (count>max)?max = count:;
        for(int i =count; i>=0;i--){
            sum += curr->val * pow(10,i);
            curr = curr->next;
        }

        int num = sum / pow(10,max);
        if(num <10 ){
            ListNode p = new ListNode(num);
            ListNode *pHead = p;
            for(int i = max; i>0;i--){
                sum -= pow(10,i);
                num = sum/pow(10,i-1);
                ListNode pNode = new ListNode(num);
                p->next=pNode;
                p=pNode;
            }
        }
    return pHead;
    }
};

