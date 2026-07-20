#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter a character\n";
    cin>>ch;
    if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'){
        cout<<"it is a vowel";
    }
    else{
        cout<<"it is not a vowel";
    }
    return 0;
}