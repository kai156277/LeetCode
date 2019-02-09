# 切片法 (7.reverse-integer-1.cpp)
将各个位分别放入一个准备好的数组中，最后再组成返回值。这里没有考虑到题目中提示的注意条件。

## 复杂度分析
* 时间复杂度：O(n), 两遍循环
* 空间复杂度：O(n), 一个数组

# 数学法  

思路：[LeetCode](https://leetcode-cn.com/problems/reverse-integer/solution/)

1. **7.reverse-integer-2.cpp** 没有考虑题目中的提示的注意条件

1. **7.reverse-integer-3.cpp** 考虑题目中的提示的注意条件

1. **7.reverse-integer-4.cpp** 使用故意导致溢出的方式检查条件

## 复杂度分析
* 时间复杂度：O(log(x))，xx 中大约有 log 10 (x) 位数字。
* 空间复杂度：O(1)。

## 一些疑问

- [ ] 3比4快的原因难道是计算数值的时间比比较的时间长？