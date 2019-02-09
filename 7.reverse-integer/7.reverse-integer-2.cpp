/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 *
 * https://leetcode-cn.com/problems/reverse-integer/description/
 *
 * algorithms
 * Easy (31.06%)
 * Total Accepted:    73.6K
 * Total Submissions: 237K
 * Testcase Example:  '123'
 *
 * 给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。
 * 
 * 示例 1:
 * 
 * 输入: 123
 * 输出: 321
 * 
 * 
 * 示例 2:
 * 
 * 输入: -123
 * 输出: -321
 * 
 * 
 * 示例 3:
 * 
 * 输入: 120
 * 输出: 21
 * 
 * 
 * 注意:
 * 
 * 假设我们的环境只能存储得下 32 位的有符号整数，则其数值范围为 [−231,  231 − 1]。请根据这个假设，如果反转后整数溢出那么就返回 0。
 * 
 */
class Solution {
public:
    int reverse(int x) {
        long reverse_value = 0;
        while(x != 0)
        {
            int m = (x % 10);
            x = x / 10;
            reverse_value = reverse_value * 10 + m;
        }

        if(reverse_value > numeric_limits<int32_t>::max() || reverse_value < numeric_limits<int32_t>::min())
            return 0;

        return reverse_value;
    }
};
