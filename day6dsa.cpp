#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>& nums,int val){
   int w=0;
   for (size_t r=0;r<nums.size();r++){
        if (nums[r]!=val){
            nums[w]=nums[r];
            w++;
        }
   }
   cout<<"{";
   for (int i=0;i<w;i++){
       cout<<nums[i]<<", ";
   }
   cout<<"}";
   return w;
}
int main(){
   vector<int> nu={0,1,2,2,1,0,5};
   cout<<removeElement(nu,2)<<'\n';
}
