#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int MaxArea(const vector<int>& s){
    int max=0;/* TLE Error incase of larger arrays
    for (size_t i=0;i<s.size()-1;i++){
        for (size_t j=i+1;j<s.size();j++){
            if (s[j]>s[i]){
                if (max<(s[i]*(j-i))){
                    max=(s[i]*(j-i));
                }
            }
            else{
                if (max<(s[j]*(j-i))){
                    max=(s[j]*(j-i));
                }
            }
        }
    }*/
    int left=0;
    int height;
    int right=s.size()-1;
    while (left<right){
        int width=right-left;
        height=min(s[left],s[right]);
        int CurrentArea=width*height;
        if (max<CurrentArea){
            max=CurrentArea;
        }
        if (s[left] < s[right]) {
            left++;
        }
        else {
            right--;
        }
    }
    return max;
}
int main(){
   vector<int> nums={1,2,5,8,8,8,9};
   cout<<MaxArea(nums)<<'\n';
}
