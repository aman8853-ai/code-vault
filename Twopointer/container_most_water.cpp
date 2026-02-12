
// LeetCode 11 - Container With Most Water (Two Pointer)
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int ans = 0;

        while (l < r) {
            int area = min(height[l], height[r]) * (r - l);
            ans = max(ans, area);

            if (height[l] < height[r]) l++;
            else r--;
        }
        return ans;
    }
};

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    Solution s;
    cout << s.maxArea(height) << endl;
    return 0;
}
