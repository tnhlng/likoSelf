#include "all.h"

int main(){
    Solution134 s;
    vector<int> nums1 = vector<int>{2,3,4};
    vector<int> nums2 = vector<int>{3,4,3};
    auto res = s.canCompleteCircuit(nums1,nums2);
    cout<<formatStl(res)<<endl;
}