#include "header.h"

/*
189. 轮转数组
已解答
中等
相关标签
相关企业
提示
给定一个整数数组 nums，将数组中的元素向右轮转 k 个位置，其中 k 是非负数。

 

示例 1:

输入: nums = [1,2,3,4,5,6,7], k = 3
输出: [5,6,7,1,2,3,4]
解释:
向右轮转 1 步: [7,1,2,3,4,5,6]
向右轮转 2 步: [6,7,1,2,3,4,5]
向右轮转 3 步: [5,6,7,1,2,3,4]
示例 2:

输入：nums = [-1,-100,3,99], k = 2
输出：[3,99,-1,-100]
解释: 
向右轮转 1 步: [99,-1,-100,3]
向右轮转 2 步: [3,99,-1,-100]
*/

class Solution189 {
public:
    //通过翻转片段来实现。
    void reverse(vector<int>& nums,int p,int q){
        if(q - p + 1 < 2){
            return;
        }
        while( p < q){
            int t = nums[p];
            nums[p] = nums[q];
            nums[q] = t;
            p++;
            q--;
        }
    }

    void rotate(vector<int>& nums, int k) {
        if(nums.size() < 2){
            return;
        }
        k %= nums.size();
        int s = 0;
        int p = nums.size()-1 - k;
        int q = nums.size() -1;
        reverse(nums,s,p);
        reverse(nums,p+1,q);
        reverse(nums,s,q);
    }
};