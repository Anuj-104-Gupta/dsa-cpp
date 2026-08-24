#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<vector<int>> accounts={{10,0},{1,2,3},{10,15}};
   int maxWealth=0;
   for (size_t i=0;i<accounts.size();i++){
       int currentSum=0;
       for (size_t j=0;j<accounts[i].size();j++){
           currentSum+=accounts[i][j];
       }
       if (maxWealth <currentSum){
           maxWealth=currentSum;
       }
   }
   cout<<maxWealth<<" is the Maximum Wealth\n";
}

