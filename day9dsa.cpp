#include<iostream>
#include<vector>
using namespace std;
int RemoveDuplicate(vector<int>& nums){
    if (nums.empty()){
        return 0;
    }
    int w=0;
    for (size_t i=1;i<nums.size();i++){
        if (nums[i]!=nums[w]){
            w++;
            nums[w]=nums[i];
        }
    }
    return w+1;
}
int main(){
   vector<int> s={1,1,2,2,5};
   cout<<RemoveDuplicate(s)<<'\n';
   for (auto i:s){
       cout<<i<<'\n';
   }
}
