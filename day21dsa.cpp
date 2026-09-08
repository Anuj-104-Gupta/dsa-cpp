#include<iostream>
#include<unordered_set>
#include<algorithm>
#include<vector>
using namespace std;
int longeststreak(vector<int>& nums){
    int longest=0;
    if (nums.empty()){return 0;}
    unordered_set<int> numSet(nums.begin(), nums.end());
    for (int i :numSet){
        if (numSet.find(i-1)==numSet.end()){
            int count=1;
            while (numSet.find(i+count)!=numSet.end()){count++;}
            longest=max(count,longest);
        }
    }
    return longest;
}
