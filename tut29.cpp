#include<iostream>
using namespace std;
class complex{
    int a , b;
    public:
    /*crereating a constructor 
    construstor is a special member function with same name as of the class. it is automatically invoked whenever an object is created 
    it is used to initialize the object of its class */
    complex(void); // constructor declaration 
    void printnumber(){
        cout<<"your no is "<<a<<"+"<<b<<"i"<<endl;
    }
};
complex:: complex(void)    //------> this is a default constructor  as it takes no parameter 
{
    a=10; 
    b=0;
    // cout<<"hello world"<<endl;
}
int main(){
complex c1,c2,c3;
c1.printnumber();
c2.printnumber();
c3.printnumber();
return 0;
}

// characterstics of constructor 
/*
1. it should be declared in teh public section of the class
2. they are automatically invoked when ever the object is created 
3. they can not written value and do not have written types 
4. it can have default arguments 
5. we can not refer to their address
*/
