#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int target;
    cin >>target;
    sort(arr.begin(),arr.end());
    int l=0,r=n-1;
    bool found=false;
    while(l<r){
        int sum=arr[l]+arr[r];
        int (sum ==target){
            found=true;
            break;
        } else if(sum<target){
            l++;
        } esle{
            r--;
        }
    }
    cout <<(found?"yes":"no");
    return 0;


}

