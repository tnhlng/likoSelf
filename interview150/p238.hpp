#include "header.h"

/*
238. 除自身以外数组的乘积
已解答
中等
相关标签
相关企业
提示
给你一个整数数组 nums，返回 数组 answer ，其中 answer[i] 等于 nums 中除 nums[i] 之外其余各元素的乘积 。

题目数据 保证 数组 nums之中任意元素的全部前缀元素和后缀的乘积都在  32 位 整数范围内。

请 不要使用除法，且在 O(n) 时间复杂度内完成此题。

 

示例 1:

输入: nums = [1,2,3,4]
输出: [24,12,8,6]
示例 2:

输入: nums = [-1,1,0,-3,3]
输出: [0,0,9,0,0]
 

提示：

2 <= nums.length <= 105
-30 <= nums[i] <= 30
保证 数组 nums之中任意元素的全部前缀元素和后缀的乘积都在  32 位 整数范围内
 

进阶：你可以在 O(1) 的额外空间复杂度内完成这个题目吗？（ 出于对空间复杂度分析的目的，输出数组 不被视为 额外空间。）
*/


class Solution238 {
public:
//先计算总累积，再将累积除当前元素，但是要判断0的影响。
//方法二：  分别计算一个元素左边子序列的累积和右边子序列的累积，然后遍历时，将左右子序列的乘积乘起来。
    vector<int> productExceptSelf(vector<int>& nums) {
        int zeroCnt = 0;
        long long mp = 1;
        for(auto x : nums){
            if(x == 0){
                zeroCnt++;
            }
            else{
                mp *= x;
            }
        }
        vector<int> res(nums.size(),0);
        for(int i = 0;i< nums.size();i++){
            if(nums[i] == 0){
                if(zeroCnt > 1){
                    res[i] = 0;
                }
                else{
                    res[i] = mp;
                }
            }
            else{
                if(zeroCnt > 0){
                    res[i] = 0;
                }
                else{
                    res[i] = mp / nums[i];
                }
            }
        }
        return res;
    }
};