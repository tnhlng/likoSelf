#include "header.h"

/*
14. 最长公共前缀
已解答
简单
相关标签
相关企业
编写一个函数来查找字符串数组中的最长公共前缀。

如果不存在公共前缀，返回空字符串 ""。

 

示例 1：

输入：strs = ["flower","flow","flight"]
输出："fl"
示例 2：

输入：strs = ["dog","racecar","car"]
输出：""
解释：输入不存在公共前缀。
*/

class Solution14 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        string com;
        for(int i = 0;i< strs.front().size();i++){
            char comCh = strs.front()[i];
            bool suc = true;
            for(auto str : strs){
                if(str.size() < i + 1 || str[i] != comCh){
                    suc = false;
                    break;
                }
            }
            if(suc){
                com.push_back(comCh);
            }
            else{
                break;
            }
        }
        return com;
    }
};