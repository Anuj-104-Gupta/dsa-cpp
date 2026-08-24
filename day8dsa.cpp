#include<iostream>
#include<vector>
using namespace std;
vector<int> check2Sum(const vector<int>& s,int target){
   int j=s.size()-1;
   int i=0;
   bool True=true;
   while (True){
       if (i<j){
           if (s[i] +s[j]==target){
               return{i,j};
               //cout<<"["<<i<<","<<j<<"]\n";
               break;
           }
           else if (s[i]+s[j]>target){
               j--;
           }
           else{
               i++;
           }
       }
       else{
           return {};
           break;
       }
   }
   return{};
}
int main(){
   vector <int> s={2,7,11,15};
   auto res = check2Sum(s, 9);
   if (!res.empty()) {
       cout << "[" << res[0] << ", " << res[1] << "]\n";
   }
}
