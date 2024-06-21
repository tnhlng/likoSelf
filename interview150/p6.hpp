#include "header.h"

/*
6. Z 字形变换
已解答
中等
相关标签
相关企业
将一个给定字符串 s 根据给定的行数 numRows ，以从上往下、从左到右进行 Z 字形排列。

比如输入字符串为 "PAYPALISHIRING" 行数为 3 时，排列如下：

P   A   H   N
A P L S I I G
Y   I   R
之后，你的输出需要从左往右逐行读取，产生出一个新的字符串，比如："PAHNAPLSIIGYIR"。

请你实现这个将字符串进行指定行数变换的函数：

string convert(string s, int numRows);
 

示例 1：

输入：s = "PAYPALISHIRING", numRows = 3
输出："PAHNAPLSIIGYIR"
示例 2：
输入：s = "PAYPALISHIRING", numRows = 4
输出："PINALSIGYAHRPI"
解释：
P     I    N
A   L S  I G
Y A   H R
P     I
示例 3：

输入：s = "A", numRows = 1
输出："A"
*/

class Solution6 {
private:
    int px = 0;
    int py = 0;
    int offset_x = 1;
    int offset_y = 0;
    
    int mRows = 0;
    int mCols = 0;

    void walk(){
        if(mRows <= 1){
            px = 0;
            py ++;
            return;
        }
        if(mCols <= 1){
            px ++;
            py = 0;
            return;
        }


        if(px + 1 < mRows && offset_x > 0){
            px += offset_x;
            if(px + 1 == mRows){
                offset_x = -1;
                offset_y = 1;
            }
        }
        else{
            px += offset_x;
            py += offset_y;
            if(px == 0 && offset_y > 0 ){
                offset_x = 1;
                offset_y = 0;
            }
        }
    }

public:
    string convert(string s, int numRows) {
        if(s.empty()){
            return "";
        }
        mRows = numRows;
        vector<vector<char>> blank(numRows);
        int len = s.size();
        //每一个V单元需要的字符数量。



        int left = numRows == 1  ? 0 : len % (2 * numRows -2);//剩余字符数量
        int cols = numRows == 1  ? s.size() : int(len / (2 * numRows - 2)) * (numRows - 1) ;
        if(left > numRows){
            cols += (left - numRows) + 1;
        }
        else{
            cols += left > 0 ? 1 : 0;
        }


        mCols = cols;
        cout<<"row:"<<mRows<<",cols:"<<mCols<<endl;
        for(auto& item : blank){
            item.resize(cols);
        }
        //填充
        for(auto x : s){
            cout<<"px:"<<px<<",py:"<<py<<endl;
            blank[px][py] = x;
            walk();
        }

        //获取拼接
        string res;
        for(int i = 0;i< numRows;i++){
            for(int j = 0;j < cols;j++){
                char c = blank[i][j];
                if(c != '\0'){
                    res.push_back(c);
                }
            }
        }
        return res;
    }
};