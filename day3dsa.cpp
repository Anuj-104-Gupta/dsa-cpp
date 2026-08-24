#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<int> nums={1,2,2,1,4};
   int n=nums.size();
   vector<int> ans(2*n);
   for (auto i=0;i<n;i++){
       ans[i]=nums[i];
       ans[i+n]=nums[i];
   }
   int x=ans.size();
   for (auto i=0;i<x;i++){
       cout<<ans[i]<<'\n';
   }
}
