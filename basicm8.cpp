#include<iostream>
using namespace std;

int main (){
    int num,reversed=0;
    cout<<"Enter a number:";
    cin>>num;
    while(num!=0){
        int digit = num%10; //get the last digit
        reversed = reversed*10+digit; //build the reversed number
        num=num/10;
    }
    cout<<"Reversed no "<< reversed<<endl;
    return 0;
}