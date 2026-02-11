#include<iostream>
#include<vector>
using namespace std;
//armstrong no sum of cubes of its digits//

bool isArmstrong(int n){
    int copyN=n;
    int sumofcubes=0;
    while(n!=0)
    {
        int dig=n%10;
        sumofcubes+=(dig*dig*dig);
        n=n/10;
        
    }
    return sumofcubes==copyN;
    

}

int main (){
    int n=153;
    if(isArmstrong(n)){
        cout<<"is an armstrong number\n";
    }else{
        cout << "NOt an armstrong no\n";
    }
    return 0;
}