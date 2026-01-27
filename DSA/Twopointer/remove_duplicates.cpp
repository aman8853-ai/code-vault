#include <bits/stdc++.h>
using namespace std;

// Problem: Remove Duplicates from Sorted Array (LeetCode 26)
// Approach: Two Pointers
// Time: O(n)
// Space: O(1)

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    if (nums.size() == 0) return 0;

    int i = 0; // slow pointer
    for (int j = 1; j < nums.size(); j++) { // fast pointer
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }

    int k = i + 1; // number of unique elements

    cout << "k = " << k << endl;
    cout << "Array after removing duplicates: ";
    for (int idx = 0; idx < k; idx++) {
        cout << nums[idx] << " ";
    }

    return 0;
}
