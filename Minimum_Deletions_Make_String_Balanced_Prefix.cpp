#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size();
        vector<int> prefixB(n + 1, 0);
        vector<int> suffixA(n + 1, 0);

        // prefix count of 'b'
        for (int i = 0; i < n; i++) {
            prefixB[i + 1] = prefixB[i] + (s[i] == 'b');
        }

        // suffix count of 'a'
        for (int i = n - 1; i >= 0; i--) {
            suffixA[i] = suffixA[i + 1] + (s[i] == 'a');
        }

        int ans = n;
        for (int i = 0; i <= n; i++) {
            ans = min(ans, prefixB[i] + suffixA[i]);
        }

        return ans;
    }
};

// Optional main for local testing
int main() {
    Solution sol;
    string s;
    cin >> s;
    cout << sol.minimumDeletions(s) << endl;
    return 0;
}
