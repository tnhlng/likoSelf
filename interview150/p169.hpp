#include "header.h"

/*
169. 多数元素
已解答
简单
相关标签
相关企业
给定一个大小为 n 的数组 nums ，返回其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。

你可以假设数组是非空的，并且给定的数组总是存在多数元素。

 

示例 1：

输入：nums = [3,2,3]
输出：3
示例 2：

输入：nums = [2,2,1,1,1,2,2]
输出：2
 

提示：
n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109
 

进阶：尝试设计时间复杂度为 O(n)、空间复杂度为 O(1) 的算法解决此问题。
*/

class Solution169 {
public:
//理解为一个消除游戏，判断（is A 和 not A)哪一种是更多的。将数据排序后进行消除，就容易理解，但其实不用进行排序。
    int majorityElement(vector<int>& nums) {
        if(nums.empty()){
            return -1;
        }
        int v = nums.front();
        int cnt = 0;
        for(int i = 0;i<nums.size(); i++){
            if(nums[i] == v){
                cnt ++;
            }
            else{
                cnt --;
                if(cnt<1){
                    v = nums[i];
                    cnt = 1;
                }
            }
        }
        return v;
    }
};
