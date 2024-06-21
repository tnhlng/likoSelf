#include "all.h"

int main(){
    Solution6 s;
    vector<int> nums1 = vector<int>{1,2,87,87,87,2,1};
    vector<int> nums2 = vector<int>{3,4,3};
    string input = "PAYPALISHIRING";
    auto res = s.convert(input,3);
    cout<<formatStl(res)<<endl;
}