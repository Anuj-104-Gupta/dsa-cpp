#include<iostream>
#include<string>
using namespace std;
bool canConstruct(const string& ransomNote,const string& magazine){
    if (ransomNote.length()>magazine.length()){return false;}
    int s[26]={};
    for (size_t i=0;i<ransomNote.length();i++){s[ransomNote[i]-'a']++;}
    for (size_t j=0;j<magazine.length();j++){s[magazine[j]-'a']--;}
    for (int count:s){
        if (count<0){return false;}
    }
    return true;
}
