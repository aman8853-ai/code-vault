#include<iostream>
using namespace std;


void fibonacciseries(int n){
    int a=0,b=1;
    for(int i=0; i<n;i++){
        cout<< a<<" ";
        int next=a+b;
        a=b;
        b=next;

    }
    cout<<endl;

}
int main(){
int n;
cout<<"Enter number of terms";
cin>>n;
fibonacciseries(n);
}