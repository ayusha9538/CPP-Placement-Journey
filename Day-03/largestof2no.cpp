#include<iostream>
using namespace std;

int main(){

    int num1 , num2;
    
    cout<<"enter first number\n";
    cin>>num1;
     
     cout<<"enter second number\n";
     cin>>num2;
     
    cout<<(num1>num2?"num1 is largest": "num2 is largest");
    return 0;
}