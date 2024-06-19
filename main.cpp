#include "all.h"

int main(){
    Solution135 s;
    vector<int> nums1 = vector<int>{1,2,2};
    vector<int> nums2 = vector<int>{3,4,3};
    auto res = s.candy(nums1);
    cout<<formatStl(res)<<endl;
}