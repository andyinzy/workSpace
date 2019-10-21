/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 *
 * https://leetcode-cn.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (36.99%)
 * Total Accepted:    56.2K
 * Total Submissions: 152K
 * Testcase Example:  '"()"'
 *
 * 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
 * 
 * 有效字符串需满足：
 * 
 * 
 * 左括号必须用相同类型的右括号闭合。
 * 左括号必须以正确的顺序闭合。
 * 
 * 
 * 注意空字符串可被认为是有效字符串。
 * 
 * 示例 1:
 * 
 * 输入: "()"
 * 输出: true
 * 
 * 
 * 示例 2:
 * 
 * 输入: "()[]{}"
 * 输出: true
 * 
 * 
 * 示例 3:
 * 
 * 输入: "(]"
 * 输出: false
 * 
 * 
 * 示例 4:
 * 
 * 输入: "([)]"
 * 输出: false
 * 
 * 
 * 示例 5:
 * 
 * 输入: "{[]}"
 * 输出: true
 * 
 */
/*这道题让我们验证输入的字符串是否为括号字符串，包括大括号，
中括号和小括号。这里我们需要用一个栈，我们开始遍历输入字符串，
如果当前字符为左半边括号时，则将其压入栈中，如果遇到右半边括号时，若此时栈为空，
则直接返回false，如不为空，则取出栈顶元素，若为对应的左半边括号，
则继续循环，反之返回false，*/
class Solution {
public:
    bool isValid(string s) {
        stack<char>brac;
        for(int i = 0;i<s.size();++i){
            if(s[i]=='('||s[i]=='['||s[i]=='{')brac.push(s[i]);
            else{
                if(brac.empty())return false;
                if(s[i]==')' && brac.top()!='(')return false;
                if(s[i]==']' && brac.top()!='[')return false;
                if(s[i]=='}' && brac.top()!='{')return false;
                brac.pop();
            }
        }
        return brac.empty();
    }
};

