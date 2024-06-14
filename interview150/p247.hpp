#include "header.h"

/*
274. H 指数
中等
相关标签
相关企业
提示
给你一个整数数组 citations ，其中 citations[i] 表示研究者的第 i 篇论文被引用的次数。计算并返回该研究者的 h 指数。

根据维基百科上 h 指数的定义：h 代表“高引用次数” ，一名科研人员的 h 指数 是指他（她）至少发表了 h 篇论文，并且 至少 有 h 篇论文被引用次数大于等于 h 。如果 h 有多种可能的值，h 指数 是其中最大的那个。

 

示例 1：

输入：citations = [3,0,6,1,5]
输出：3 
解释：给定数组表示研究者总共有 5 篇论文，每篇论文相应的被引用了 3, 0, 6, 1, 5 次。
     由于研究者有 3 篇论文每篇 至少 被引用了 3 次，其余两篇论文每篇被引用 不多于 3 次，所以她的 h 指数是 3。
示例 2：

输入：citations = [1,3,1]
输出：1
*/

class Solution247 {
public:
    int hIndex(vector<int>& citations) {
        if(citations.empty()){
            return 0;
        }
        map<int,int> paperCiCnt;
        for(auto v : citations){
            paperCiCnt[v] += 1;
        }
        vector<int> candiate ={0}; //由于H指数可能存在多个可选的值，需要去最大的，这里临时保存。
        int paperCnt = 0;//高引用文章统计计数。
        int ci = 0;//记录当前的引用值。
        for(auto iter = paperCiCnt.rbegin(); iter != paperCiCnt.rend() && iter->first > 0; iter ++ ){
            paperCnt += iter->second;
            ci = iter->first;
            //引用值是从高降低的。
            if(ci < paperCnt){//引用值已经小于引用计数，那么引用值是一个可能得值。
                candiate.push_back(ci);
                break;
            }
            else{//引用数从高到底，文章计数从低到高，文章计数一直是可选的值。
                candiate.push_back(paperCnt);
            }
        }
        return *std::max_element(candiate.begin(),candiate.end());
    }
};