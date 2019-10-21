/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 *
 * https://leetcode-cn.com/problems/climbing-stairs/description/
 *
 * algorithms
 * Easy (44.79%)
 * Total Accepted:    35.7K
 * Total Submissions: 79.6K
 * Testcase Example:  '2'
 *
 * 假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
 * 
 * 每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
 * 
 * 注意：给定 n 是一个正整数。
 * 
 * 示例 1：
 * 
 * 输入： 2
 * 输出： 2
 * 解释： 有两种方法可以爬到楼顶。
 * 1.  1 阶 + 1 阶
 * 2.  2 阶
 * 
 * 示例 2：
 * 
 * 输入： 3
 * 输出： 3
 * 解释： 有三种方法可以爬到楼顶。
 * 1.  1 阶 + 1 阶 + 1 阶
 * 2.  1 阶 + 2 阶
 * 3.  2 阶 + 1 阶
 * 
 * 
 */
/*
递归不行，思想是可行的，但消耗的资源太多
超出时间限制
class Solution {
public:
    int climbStairs(int n) {
        if(n==1)return 1;
        if(n==2)return 2;
        return (climbStairs(n-1)+climbStairs(n-2));
    }
};
要注意的是
1   1
2   2
3   3
4   5
5   8
与下面dp(n-1)对应但i<n相当于n-1，最后back返回最上面一个
*/
class Solution {
public:
    int climbStairs(int n) {
        if(n<=1)return 1;
        vector<int> dp(n);
        dp[0]=1;dp[1]=2;
        for(int i=2;i<n;++i){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp.back();
    }
};

