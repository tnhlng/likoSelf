#include "all.h"

int main(){
    Solution58 s;
    vector<int> nums1 = vector<int>{1,2,87,87,87,2,1};
    vector<int> nums2 = vector<int>{3,4,3};
    string input = "luffy is still joybo  ";
    auto res = s.lengthOfLastWord(input);
    cout<<formatStl(res)<<endl;
}