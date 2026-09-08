#include<iostream>
#include<cctype>
#include<string>
using namespace std;
bool IsPalindrone(string s){
   string s2="";
   int right=s.length()-1;
   int left=0;
   for (int i=0;i<(right+1);i++){
       if (isalnum(s[i])){
           s2+=tolower(s[i]);
       }
   }
   right=s2.length()-1;
   cout<<s2<<'\n';
   while ((left<right)||(left==right)){
       if (s2[left]!=s2[right]){
           return false;
           break;
       }
       left++;
       right--;
   }
  return true;
}
int main(){
   string s="NAMAN";
   cout<<IsPalindrone(s)<<'\n';
   string r="A MAN , A PLAN ,A CANAL:PANAMA";
   cout<<IsPalindrone("RACE A CAR")<<'\n';
   cout<<IsPalindrone(r)<<'\n';
}
