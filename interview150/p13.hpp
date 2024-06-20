#include "header.h"

/*
13. 罗马数字转整数
已解答
简单
相关标签
相关企业
提示
罗马数字包含以下七种字符: I， V， X， L，C，D 和 M。

字符          数值
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
例如， 罗马数字 2 写做 II ，即为两个并列的 1 。12 写做 XII ，即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。

通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：

I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
给定一个罗马数字，将其转换成整数。

 

示例 1:

输入: s = "III"
输出: 3
示例 2:

输入: s = "IV"
输出: 4
示例 3:

输入: s = "IX"
输出: 9
示例 4:

输入: s = "LVIII"
输出: 58
解释: L = 50, V= 5, III = 3.
示例 5:

输入: s = "MCMXCIV"
输出: 1994
解释: M = 1000, CM = 900, XC = 90, IV = 4.
*/


class Solution13 {
private:
    unordered_map<char,int> romanHash = {
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
    };
    int pairV(char pre,char c){
        if(pre == 'I'){
            if(c == 'V'){
                return 4;
            }
            if(c == 'X'){
                return 9;
            }
        }
        if(pre == 'X'){
            if(c == 'L'){
                return 40;
            }
            if(c == 'C'){
                return 90;
            }
        }
        if(pre == 'C'){
            if(c == 'D'){
                return 400;
            }
            if(c == 'M'){
                return 900;
            }
        }
        return -1;
    }
public:
    int romanToInt(string s) {
        char preC = ' ';
        int res = 0;
        for(int i=0 ; i< s.size();i ++){
            auto c = s[i];
            if(i > 0 ){
                preC = s[i-1];
		        auto preV = romanHash[preC];
                auto cv = romanHash[c];
                auto pv = pairV(preC,c);
		        cout<<"preC:"<<preV<<",cv:"<<cv<<",rmV:"<<pv<<endl;
		        if(pv > 0){
                    res += pv - preV;
                }
                else{
                    res += cv;
                }
            }
            else{
                res += romanHash[c];          
            }
            cout<<res<<endl;
        }
        return res;
    }
};
