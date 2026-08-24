#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int minSubArrayLength(int target,vector<int>& s){
   int min_len=INT_MAX;
   int left=0;
   int right=0;
   int currentSum=0;
   for (left=0;left<int (s.size());left++){
       currentSum+=s[left];
       while (currentSum>=target){
           min_len = min(min_len, left - right + 1);
           currentSum-=s[right];
           right++;
      }
   }
   return (min_len == INT_MAX) ? 0 : min_len;
}
int main() {
    vector<int> nums1 = {2, 3, 1, 2, 4, 3};
    cout << "Test 1 (Target 7): " << minSubArrayLength(7, nums1) << "\n";
    vector<int> nums2 = {1, 4, 4};
    cout << "Test 2 (Target 4): " << minSubArrayLength(4, nums2) << "\n";
    vector<int> nums3 = {1, 1, 1, 1, 1, 1, 1, 1};
    cout << "Test 3 (Target 11): " << minSubArrayLength(11, nums3) << "\n";
}
