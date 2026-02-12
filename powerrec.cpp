#include <iostream>
using namespace std;

int power(int n) {
    // base case
    if (n == 0)
        return 1;

    // recursive relation
    return 2* power(n - 1);
    
      // ✅ return added
}

int main() {
    int n;
    cin >> n;
    int ans = power(n);
    cout << "The factorial is" << ans <<endl;
}