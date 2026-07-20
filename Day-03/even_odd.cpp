#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(num>=0){
        cout<<"the number "<<num<<" is even\n";
    } else {
        cout<<"the number "<<num<<" is odd\n";
    }

    return 0;

}