
// LeetCode 167 - Two Sum II (Two Pointer)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;
        while (l < r) {
            int sum = numbers[l] + numbers[r];
            if (sum == target) return {l + 1, r + 1};
            else if (sum < target) l++;
            else r--;
        }
        return {};
    }
};

int main() {
    vector<int> numbers = {2,7,11,15};
    int target = 9;

    Solution s;
    vector<int> ans = s.twoSum(numbers, target);

    for (int x : ans) cout << x << " ";
    cout << endl;
    return 0;
}
