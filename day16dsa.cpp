#include<iostream>
#include<cctype>
#include<string>
using namespace std;
bool isPalindromeRange(const string& s, int i, int j) {
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}
bool validPalindrone(const string& s) {
    int left = 0;
    int right = static_cast<int>(s.length()) - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            // Test BOTH choices: skip left OR skip right
            return isPalindromeRange(s, left + 1, right) || 
                   isPalindromeRange(s, left, right - 1);
        }
        left++;
        right--;
    }

    return true;
}

int main(){
   cout<<validPalindrone("abca")<<'\n';
   cout<<validPalindrone("aba")<<'\n';
   cout<<validPalindrone("abc")<<'\n';
   cout<<validPalindrone("ebcbbece")<<'\n';
}
