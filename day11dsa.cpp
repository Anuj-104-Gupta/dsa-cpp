#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> ThreeSum(vector<int>& s) {
    vector<vector<int>> result;
    int n = static_cast<int>(s.size());
    if (n < 3) return result;

    // 1. Sort the array
    sort(s.begin(), s.end());

    // 2. Fix the first element
    for (int i = 0; i < n - 2; i++) {
        // Early termination: 3 positive numbers cannot sum to 0
        if (s[i] > 0) break;

        // Skip duplicate values for the first element
        if (i > 0 && s[i] == s[i - 1]) continue;

        int left = i + 1;
        int right = n - 1;

        // 3. Two-pointer scan (Day 8 pattern)
        while (left < right) {
            int sum = s[i] + s[left] + s[right];

            if (sum == 0) {
                result.push_back({s[i], s[left], s[right]});

                // Skip duplicate values for the second element
                while (left < right && s[left] == s[left + 1]) left++;
                // Skip duplicate values for the third element
                while (left < right && s[right] == s[right - 1]) right--;

                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    return result;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = ThreeSum(nums);

    for (const auto& triplet : ans) {
        cout << "[" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << "]\n";
    }

    return 0;
}
