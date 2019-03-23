/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 *
 * https://leetcode-cn.com/problems/min-stack/description/
 *
 * algorithms
 * Easy (48.05%)
 * Total Accepted:    19.6K
 * Total Submissions: 40.7K
 * Testcase Example:  '["MinStack","push","push","push","getMin","pop","top","getMin"]\n[[],[-2],[0],[-3],[],[],[],[]]'
 *
 * 设计一个支持 push，pop，top 操作，并能在常数时间内检索到最小元素的栈。
 * 
 * 
 * push(x) -- 将元素 x 推入栈中。
 * pop() -- 删除栈顶的元素。
 * top() -- 获取栈顶元素。
 * getMin() -- 检索栈中的最小元素。
 * 
 * 
 * 示例:
 * 
 * MinStack minStack = new MinStack();
 * minStack.push(-2);
 * minStack.push(0);
 * minStack.push(-3);
 * minStack.getMin();   --> 返回 -3.
 * minStack.pop();
 * minStack.top();      --> 返回 0.
 * minStack.getMin();   --> 返回 -2.
 * 
 * 
 */
/*这个题可以帮我巩固栈的搭建过程
 * 这道最小栈跟原来的栈相比就是多了一个功能，可以返回该栈的最小值。
 * 使用两个栈来实现，一个栈来按顺序存储push进来的数据，另一个用来存出现过的最小值。
 * 面试官看重代码逻辑。push,pop,top,getMin都是O(1)时间。
 * 注意：出入栈都要修改minVal
 * 代码如下:O(N)
 */
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {}
    
    void push(int x) {
        data.push(x);
        if(minVal.empty()||x<=minVal.top()){
            minVal.push(x);
        }
    }
    
    void pop() {
        int value = data.top();
        data.pop();
        if(value == minVal.top()){
            minVal.pop();
        }
    }
    
    int top() {
        return data.top();
    }
    
    int getMin() {
        return minVal.top();
    }
    private:
        stack<int>data,minVal;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */

