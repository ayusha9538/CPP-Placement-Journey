// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b= 30;
//     cout<<"Before swapping: a = "<<a<<" b = "<<b<<endl;
//     int temp;
//     temp = a;
//     a= b;
//     b = temp;
//     cout<<"After swapping" << "a = "<< a << " B = "<< b << endl;
//     return 0;
// }

// second method 

// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 20;
//     cout<<"Before swapping: a = "<<a<<" b = "<<b<<endl;
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     cout<<"After swapping: a = "<<a<<" b = "<<b<<endl;
//     return 0;   
// }


// 3 rd method 

#include<iostream>
using namespace std;
int main(){
    int a = 30;
    int b= 20;
    cout<<"Before swapping: a = "<<a<<" b = "<<b<<endl;
    swap(a,b);
    cout<<"After swapping: a = "<<a<<" b = "<<b<<endl;
    return 0;
}
