#include<iostream>
#include<vector>
using namespace std;

int sumOfDigits(int num){
    int digsum=0;
    while (num>0){
        int lastdig=num%10;
        num/=10;
        digsum+=lastdig;

    }
    return digsum;
}
int main(){
    int num=1355;
    cout<<"sum="<<sumOfDigits(num)<<endl;
    return 0;


}

