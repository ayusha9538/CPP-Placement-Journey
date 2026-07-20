#include <iostream> 
using namespace std;
int main(){
    int num1, num2, num3;
    cout<<"enter first number\n";
    cin>>num1;
    cout<<"enter second number\n";
    cin>>num2;
    cout<<"enter third number\n";
    cin>>num3;
    if(num1>num2 && num1>num3){
        cout<<"num1 is largest";
    }
    else if(num2>num1 && num2>num3){
        cout<<"num2 is largest";
    }
    else{
        cout<<"num3 is largest";
    }
    return 0;
}