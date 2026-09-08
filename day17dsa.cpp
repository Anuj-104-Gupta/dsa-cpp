#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int len(string s){
   if (int(s.size())%2==0){
       return 0;
   }
   else{
       return 1;
   }
}
string longest(const string& s){
   int x=len(s);
   string longe="";
   int centre=0;
   //if (!(s.isalnum)){return "Enter Valid String"}
   if (x==0){
       while (centre<int(s.size())){
           string test=s[centre];
           int left=centre;
           int right =centre+1;
           while ((left>=0)&&(right<int(s.size()))){
               if (s[left]==s[right]){
                  test=s[left]+test+s[right];
                  left--;
                  right++;
                  if (test.size()>longe.size()){
                      longe=test;
                  }
               }
               else{break;}
           }
           centre++;
       }
       if (longe==""){return s[0];}
   }
    else{
         while (centre<int(s.size())){
           string test=s[centre];
           int left=centre-1;
           int right =centre+1;
           string test=s[centre]
           while ((left>=0)&&(right<int(s.size()))){
               if (s[left]==s[right]){
                  test=s[left]+test+s[right];
                  left--;
                  right++;
                  if (test.size()>longe.size()){
                      longe=test;
                  }
               }
               else{break;}
           }
           centre++;
       }
       if (longe==""){return s[0];}
   }
}
int main(){
   string r="asd";
   cout<<r[0]<<r<<r[2]<<'\n';
}
