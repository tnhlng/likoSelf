#include "all.h"

int main(){
    Solution238 s;
    vector<int> nums = vector<int>{-1,1,0,-3,3};
    auto res = s.productExceptSelf(nums);
    cout<<formatStl(res)<<endl;
}