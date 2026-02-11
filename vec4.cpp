#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>vec={1,2,35,5};
    vec.insert(vec.begin()+2, 45);

   for (int i = 0; i < vec.size(); i++){
    cout << vec[i] << " ";
    
    }
    cout << endl;
    return 0;
}
