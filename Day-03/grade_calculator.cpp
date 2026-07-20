#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"enter the number: \n";
    cin>>num;
    if(num>=90){
        cout<<"A";
    } else if(num>=80 && num<90){
        cout<<"B";
    } else {
        cout<<"C";
    }
    return 0;
}