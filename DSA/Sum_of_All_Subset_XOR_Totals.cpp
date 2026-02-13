#include <bits/stdc++.h>
using namespace std;

/*
 LeetCode: Sum of All Subset XOR Totals (Easy)
 Concept: Backtracking (Take / Not Take)
*/

class Solution {
public:
    int solve(int index, vector<int>& nums, int currXor) {
        // Base case: processed all elements
        if (index == nums.size()) {
            return currXor;
        }

        // Take current element
        int take = solve(index + 1, nums, currXor ^ nums[index]);

        // Not take current element
        int notTake = solve(index + 1, nums, currXor);

        return take + notTake;
    }

    int subsetXORSum(vector<int>& nums) {
        return solve(0, nums, 0);
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3};
    cout << "Sum of subset XOR totals: " << sol.subsetXORSum(nums) << endl;
    return 0;
}
