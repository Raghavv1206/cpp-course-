#include<iostream>
using namespace std;
/*
case 1:
class B: public A{
//order of execution of constructor ---> first  A() then B()
};

case 2 :
class A: public B, public C {
    //order of execution of constructor---> first B() then C() then A()
    };

case 3:
class A: public B, virtual public C{
    //order of execution of constructor ---> C() then B() then A()
    };

*/


class Base1{
    int data1;
    public:
    Base1(int i){
    data1 = i;
    cout<<"Base1 class constructor called "<<endl;
    }
    void printdatabase1(void){
        cout<<"the value of data1 is "<<data1<<endl;
        
    }
};
class Base2{
    int data2;
    public:
    Base2(int i){
    data2 = i;
    cout<<"Base2 class constructor called "<<endl;
    }
    void printdatabase2(void){
        cout<<"the value of data2 is "<<data2<<endl;

    }
};

class Derived: public Base1, public Base2{
    int derived1, derived2;
    public:
    Derived(int a, int b, int c, int d): Base2(b), Base1(a){
        derived1 = c;
        derived2 = d;
        cout<<"derived class constructor called "<<endl;

    }
    void printdataderived(void){
        cout<<"the value of derived1 is "<<derived1<<endl;
        cout<<"the value of derived2 is "<<derived2<<endl;

    }
};
int main(){
Derived harry(1,2,3,4);
harry.printdatabase1();
harry.printdatabase2();
harry.printdataderived();
return 0;
}