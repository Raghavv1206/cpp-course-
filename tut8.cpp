#include <iostream>
#include <iomanip>
using namespace std;
int main(){
// int a=34;
// cout <<"the value of a is" <<a<<endl;
//  a=45;
// cout<<"the value of a is "<<a<<endl; 

// constant in cpp
// const float a =3;
// cout <<"the value of a is" <<a<<endl;
// a=45;  // will get an error as a is constant 
// cout <<"the value of a is" <<a<<endl;


// manipulators in c++
int a=3, b=67, c=1234;
cout<<"the value of a without setw is "<<a<<endl;
cout<<"the value of b without setw is "<<b<<endl;
cout<<"the value of c without setw is "<<c<<endl;


cout<<"the value of a is "<<setw(10)<<a<<endl;
cout<<"the value of b is "<<setw(10)<<b<<endl;
cout<<"the value of c is "<<setw(10)<<c<<endl;






return 0;
 }