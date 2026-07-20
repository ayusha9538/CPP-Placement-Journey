#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the number: ";
    
    cin>>num;

    if(num>0){
        cout<<"the number "<<num<<" is positive\n";
    } 
    else if(num<0){
        cout<<"the number "<<num <<" is negative \n";
    } 
    else {
        cout<<"the number "<<num<<" is zero\n";
    }

    return 0;
}
