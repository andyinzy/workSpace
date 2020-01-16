/*这道题让我们验证输入的字符串是否为括号字符串，包括大括号，
中括号和小括号。这里我们需要用一个栈，我们开始遍历输入字符串，
如果当前字符为左半边括号时，则将其压入栈中，如果遇到右半边括号时，若此时栈为空，
则直接返回false，如不为空，则取出栈顶元素，若为对应的左半边括号，
则继续循环，反之返回false，*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cmath>
#include <stack>

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
