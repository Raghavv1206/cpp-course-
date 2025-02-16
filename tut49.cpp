#include<iostream>
using namespace std;

/*
syntax of initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}

class Test {
int a;
int b ;
public:
    Test(int i, int j): a(i), b(j){constructor-body}
    };
*/
class Test {
int a;
int b ;
public:
    // Test(int i, int j): a(i), b(j)
    // Test(int i, int j): a(i), b(i+j)
    // Test(int i, int j): a(i), b(2*j)
    // Test(int i, int j): b(j), a(i+b) ---> red flag this will create problems because a will be initialized first 
    Test(int i, int j)
    {
        a = i;
        b = j;
    cout<<"constructor executed"<<endl;
    cout<<"value of a is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;
    }
    };
int main(){

Test t(4,6);
return 0;
}