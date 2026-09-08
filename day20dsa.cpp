#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
vector<int> TwoSum(vector<int>& nums,int target){
   unordered_map<int ,int> seen;
   for (size_t i=0;i<nums.size();++i){
       int complement =target-nums[i];
       if (seen.find(complement)!= seen.end()){ return{seen[complement],int (i)};}
       seen[nums[i]]=i;
   }
   return {};
}
int main() {
    vector<int> nums1 = {2, 7, 11, 15};
    auto res1 = TwoSum(nums1, 9);
    cout << "Test 1: [" << res1[0] << ", " << res1[1] << "]\n"; // Expected: [0, 1]

    vector<int> nums2 = {3, 2, 4};
    auto res2 = TwoSum(nums2, 6);
    cout << "Test 2: [" << res2[0] << ", " << res2[1] << "]\n"; // Expected: [1, 2]

    vector<int> nums3 = {3, 3};
    auto res3 = TwoSum(nums3, 6);
    cout << "Test 3: [" << res3[0] << ", " << res3[1] << "]\n"; // Expected: [0, 1]

    return 0;
}
