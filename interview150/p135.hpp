#include "header.h"

/*
135. 分发糖果
困难
相关标签
相关企业
n 个孩子站成一排。给你一个整数数组 ratings 表示每个孩子的评分。

你需要按照以下要求，给这些孩子分发糖果：

每个孩子至少分配到 1 个糖果。
相邻两个孩子评分更高的孩子会获得更多的糖果。
请你给每个孩子分发糖果，计算并返回需要准备的 最少糖果数目 。

 

示例 1：

输入：ratings = [1,0,2]
输出：5
解释：你可以分别给第一个、第二个、第三个孩子分发 2、1、2 颗糖果。
示例 2：

输入：ratings = [1,2,2]
输出：4
解释：你可以分别给第一个、第二个、第三个孩子分发 1、2、1 颗糖果。
     第三个孩子只得到 1 颗糖果，这满足题面中的两个条件。
*/

class Solution135 {
public:
    int candy(vector<int>& ratings) {
        vector<int> vc(ratings.size(),1);
        int curV = 1;
        int minV = 1;
        int maxIndex = 0;
        int minIndex = 0;
        int maxRat = 0;
        int minRat = INT_MAX;
        for(int i = 1 ;i< ratings.size(); i++){
            if(ratings[i] > ratings[i-1]){
                maxRat = ratings[i];
                maxIndex = i;
            }
            if(ratings[i] < ratings[i-1]){
                minRat = ratings[i];
                minIndex = i;
            }
            
            if(ratings[i] > ratings[i-1]){
                curV +=1;
            }
            else{
                curV -=1;
            }
            vc[i] = curV;
            minV = min(minV,vc[i]);
        }
        auto sumV = std::accumulate(vc.begin(),vc.end(),0);
        return sumV + ratings.size() * (1 - minV);
    }
};