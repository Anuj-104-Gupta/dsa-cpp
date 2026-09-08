#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& str){
   unordered_map<string, vector<string>> groups;
   for (const string& s:str){
       string key=s;
       sort(key.begin(),key.end());
       groups[key].push_back(s);
   }
   vector<vector<string>> result;
   for (auto& pair : groups) {
       result.push_back(std::move(pair.second));
   }
   return result;
}
int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
    auto groups = groupAnagrams(strs);

    for (const auto& group : groups) {
        cout << "[ ";
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << "]\n";
    }
    return 0;
}
