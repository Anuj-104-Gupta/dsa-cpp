#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector <int> nums={7,8,9,10};
   int n=nums.size();
   vector <int> l(n);
   for (int i=1;i<n;i++){
       nums[i]=nums[i]+nums[i-1];
   }
   for (int i=0;i<n;i++){
       cout<<nums[i]<<'\n';
   }
}

