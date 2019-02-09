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
        vector<int64_t> nums;
        nums.reserve(20);
        int value = x;
        while(value != 0)
        {
            nums.push_back(value % 10);
            value = value / 10;
        }

        int64_t reverse_value = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            int exp = nums.size() - i - 1;
            reverse_value += nums[i] * pow(10, exp);
        }

        if(reverse_value > numeric_limits<int32_t>::max() || reverse_value < numeric_limits<int32_t>::min())
            return 0;

        return reverse_value;
    }
};
