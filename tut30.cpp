#include<iostream>
using namespace std;

class complex{
    int a , b;

    public:
    
    complex(int , int); // constructor declaration 
    void printnumber(){
        cout<<"your no is "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex ::complex(int x, int y)   //------> this is a parameterized constructor  as it accepts 2 parameter 
{
    a=x; 
    b=y;
    // cout<<"hello world"<<endl;
 }

int main(){
// implicti call
complex a(4,3) ;

// explicit call 
complex b = complex(5,7);

a.printnumber();
b.printnumber();

return 0;
}