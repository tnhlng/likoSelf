#include "all.h"

int main(){
    Solution27 s;
    vector<int> nums = vector<int>{0,1,2,2,3,0,4,2};
    int val = 2;
    auto res = s.removeElement(nums,val);
    cout<<res<<endl;
}