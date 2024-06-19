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

    //一个规律，发糖果要么比前一个人多发一个，要么为了总数少发，就发1个
    //如果当前是递增序列，那么比前一个人多发一个，
    //否则，递减序列的第一个人发一个糖果，然后递减序列中后续人都少发一个，会成为负数，那么就是将之前的人都+1补发一个，从而当前人不会是负数，而是1，不断这样操作。

    /*
    class Solution {
    public:
        int candy(vector<int>& ratings) {
            int n = ratings.size();
            int ret = 1;
            int inc = 1, dec = 0, pre = 1;
            for (int i = 1; i < n; i++) {
                if (ratings[i] >= ratings[i - 1]) {
                    dec = 0;
                    pre = ratings[i] == ratings[i - 1] ? 1 : pre + 1;
                    ret += pre;
                    inc = pre;
                } else {
                    dec++;
                    if (dec == inc) {
                        dec++;
                    }
                    ret += dec;
                    pre = 1;
                }
            }
            return ret;
        }
    };
    
    */
    int candy(vector<int>& ratings) {
        if(ratings.empty()){
            return 0;
        }
        int total = 1;
        int cur = 1;
        int descLen = 0;
        for(int i = 1;i<ratings.size();i++){
            if(ratings[i] > ratings[i-1]){
                cur += 1;
                descLen = 0;
            }
            else if(ratings[i] < ratings[i-1]){
                descLen = cur > 1 ? 0 : descLen + 1;
                cur = 1;
            }
            else{
                descLen = 0;
                cur = 1;
            }
            total += cur;
            if(descLen > 0){
                total += 1;
            }
        }
        return total ;
    }
};

