#include<iostream>
#include<array>

using namespace std;
int main(){
   std::array<int, 6> nums={45,12,89,7,23,61};
   int min=nums[0];
   int max=nums[0];
   for(size_t i=0;i<nums.size();i++){
       if (nums[i]>max){
           max=nums[i];
       }
       if (nums[i]<min){
           min=nums[i];
       }
       else{continue;}
   }
   cout<<"Lowest value in given array is=>"<<min<<"\nHighest Value in given array is=>"<<max<<'\n';
}
