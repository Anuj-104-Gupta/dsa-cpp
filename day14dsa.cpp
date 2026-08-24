#include<iostream>
#include<vector>
using namespace std;
int longestones(const vector<int>& s,int k){
   int maxlength=0;
   int right=0;
   int left=0;
   int zeroCount=0;
   /*for (size_t i=0;i<s.size();i++){
        if ((s[i]!=0)||(s[i]!=1)){
            return 0;
            break;
        }
   }*/
   while (true){
      if (right==int(s.size())){break;}
      if (s[right]==0){
          zeroCount++;
      }
      if (zeroCount>k){
          while (zeroCount>k){
              if (s[left]==0){
                  zeroCount--;
              }
              left++;
          }
      }
      if (maxlength<(right-left+1)){
              maxlength=(right-left+1);
          }
      right++;
   }
   return maxlength;
}
int main(){
    vector<int> s={1,1,0,0,1};
    cout<<longestones(s,2)<<'\n';
}
