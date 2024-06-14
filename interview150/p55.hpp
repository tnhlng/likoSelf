#include "header.h"

/*
55. 跳跃游戏
已解答
中等
相关标签
相关企业
给你一个非负整数数组 nums ，你最初位于数组的 第一个下标 。数组中的每个元素代表你在该位置可以跳跃的最大长度。

判断你是否能够到达最后一个下标，如果可以，返回 true ；否则，返回 false 。

 

示例 1：

输入：nums = [2,3,1,1,4]
输出：true
解释：可以先跳 1 步，从下标 0 到达下标 1, 然后再从下标 1 跳 3 步到达最后一个下标。
示例 2：

输入：nums = [3,2,1,0,4]
输出：false
解释：无论怎样，总会到达下标为 3 的位置。但该下标的最大跳跃长度是 0 ， 所以永远不可能到达最后一个下标。
*/

class Solution55 {
public:
    bool canJump(vector<int>& nums) {
        if(nums.empty()){
            return true;
        }
        vector<bool> jpIndex(nums.size(),false);//保存 标记每个位置起点是否能到达。
        jpIndex[0] = true;
        int maxPos = 0;
        for(int i = 0;i< nums.size();i++){//当前位置。
            int tMaxPos = (i + nums[i]);
            if(tMaxPos > maxPos){//由于较近的位置已经被标记过了，所以只有能到达更远的地方时才进行标记。
                for(int j = maxPos; j <= tMaxPos && j < nums.size(); j++){//标记这些位置起点是否能到达这里。
                    jpIndex[j] = jpIndex[i] ? true : jpIndex[j];
                }
            }
            maxPos = max(maxPos,tMaxPos);
        }
        /*
        for(auto vv : jpIndex){
            for(auto v : vv){
                cout<<v<<"\t";
            }
            cout<<"\n";
        }
        */
        return jpIndex.back();
    }
};