#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec;
    vec.push_back(1);
    vec.emplace_back(8);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(5);
    vec.push_back(7);
    vec.pop_back();
    

    for(int val : vec) {
        cout << val <<" ";
    }
    cout << endl;
    cout<< "val at idx 2 "<<vec[4]<<endl;
    cout<< "front "<< vec.front()<<endl;
    cout<<"back"<< vec.back()<<endl;
    return 0;
}