#include "all.h"

int main(){
    Solution151 s;
    vector<int> nums1 = vector<int>{1,2,87,87,87,2,1};
    vector<int> nums2 = vector<int>{3,4,3};
    string input = "EPY2giL a ";
    auto res = s.reverseWords(input);
    cout<<formatStl(res)<<endl;
}