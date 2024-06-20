#include "header.h"

/*
58. 最后一个单词的长度
已解答
简单
相关标签
相关企业
给你一个字符串 s，由若干单词组成，单词前后用一些空格字符隔开。返回字符串中 最后一个 单词的长度。

单词 是指仅由字母组成、不包含任何空格字符的最大
子字符串
。

 

示例 1：

输入：s = "Hello World"
输出：5
解释：最后一个单词是“World”，长度为 5。
示例 2：

输入：s = "   fly me   to   the moon  "
输出：4
解释：最后一个单词是“moon”，长度为 4。
示例 3：

输入：s = "luffy is still joyboy"
输出：6
解释：最后一个单词是长度为 6 的“joyboy”。
*/



class Solution58 {
public:
    int lengthOfLastWord(string s) {
        int len = 0;
        for(auto iter = s.rbegin();iter != s.rend(); iter ++){
            auto c = *iter;
            if(c!=' '){
                len +=1;
            }
            if(c == ' ' && len > 0){
                break;;
            }
        }
        return len;
    }
};
