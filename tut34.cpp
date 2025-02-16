#include<iostream>
using namespace std;

class Number{
    int a ;
    public:

    Number(){
        a=0;
    }
    Number(int num){
        a= num;

    }
    // when no copy constructor is found, compiler supplies its own copy constructor 
    Number(Number &obj){
        cout<<"copy constructor called!!"<<endl;
        a= obj.a;
    }
    void display(){
        cout<<"the no fir this object is"<<a<<endl;
    }
};
int main(){
    Number x,y,z(45),z2,z3;
    x.display();
    y.display();
    z.display();
    Number z1(z);   //copy constructord invoked
    z1.display();
   
   z2=z;    //copy constructor not called

    Number z3 = z;   // copy constructor invoked
    z3.display();
    
return 0;
}