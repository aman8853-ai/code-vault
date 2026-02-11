#include<iostream>
#include<vector>
using namespace std;

void printDigits(int n){
    while(n!=0){
        int digit=n%10;
        cout<<digit<<endl;

        n=n/10;
    


    }
}
    int main(){
       int  n=3456;
        printDigits(n);
        return 0;
    }
    
