#include<iostream>
using namespace std;

int main(){
int a = 3;
int* b= &a;
// &---->(address of) operator
cout<<" the address of a is "<<b<<endl;
cout<<" the address of a is "<<&a<<endl;


// *---> (value at ) dereference operator 
cout<<" the value at address b is " <<*b<<endl;


//  pointer to pointer 
int**c = &b;
cout <<" the adderss of b is "<<c<<endl;
cout <<" the adderss of b is "<<&b<<endl;

cout<<" the value at address value_at (value at c) is "<<**c<<endl;
return 0;
}