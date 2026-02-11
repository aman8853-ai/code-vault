#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp; 
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (mp.find(complement) != mp.end()) {
            vector<int> ans;
            ans.push_back(mp[complement]);
            ans.push_back(i);
            return ans;
        }
        mp[nums[i]] = i;
    }
    return vector<int>(); // empty vector
}

int main() {
    int arr[] = {2, 7, 11, 15};
    vector<int> nums(arr, arr + sizeof(arr)/sizeof(int));
    int target = 18   ;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Indices: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No pair found." << endl;
    }
    return 0;
}