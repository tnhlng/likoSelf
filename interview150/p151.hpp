#include "header.h"

/*
151. 反转字符串中的单词
已解答
中等
相关标签
相关企业
给你一个字符串 s ，请你反转字符串中 单词 的顺序。

单词 是由非空格字符组成的字符串。s 中使用至少一个空格将字符串中的 单词 分隔开。

返回 单词 顺序颠倒且 单词 之间用单个空格连接的结果字符串。

注意：输入字符串 s中可能会存在前导空格、尾随空格或者单词间的多个空格。返回的结果字符串中，单词间应当仅用单个空格分隔，且不包含任何额外的空格。

 

示例 1：

输入：s = "the sky is blue"
输出："blue is sky the"
示例 2：

输入：s = "  hello world  "
输出："world hello"
解释：反转后的字符串中不能存在前导空格和尾随空格。
示例 3：

输入：s = "a good   example"
输出："example good a"
解释：如果两个单词间有多余的空格，反转后的字符串需要将单词间的空格减少到仅有一个。
*/

class Solution151 {

// AB_CD   --> BA_DC  --> CD_AB

public:
    string reverseWords(string s) {
        int start = 0;
        int pos = 0;
        string res;
        while(pos < s.size()){
            //新单词的开始
            if(s[pos] != ' '){
                if(pos == 0 || (s[pos-1] == ' ')){
                    start = pos;
                }
            }
            //单词结束
            if(s[pos] == ' '){
                if(pos > 0 && s[pos-1] != ' '){
                    string wd(s.rbegin() + s.size() - 1 - (pos - 1),s.rbegin() + s.size() - 1 - start + 1); // 用反向迭代器将字符逆序。
                    cout<<wd<<endl;
                    res.append(wd);
                    res.push_back(' ');
                }
            }
            pos ++;
        }
        if(s.back()!=' '){
            string wd(s.rbegin(),s.rbegin() + s.size() - 1 - start + 1);
            cout<<wd<<endl;
            res.append(wd);
        }
        int shift = res.back() == ' ' ? 1 : 0;
        return string(res.rbegin() + shift,res.rend());
    }
};
