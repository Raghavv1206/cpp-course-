#include<iostream>
using namespace std;

// base class
class employee{
    public:
    int id;
    float salary;
    employee(int inpId){
        id = inpId;
        salary = 34.0;
    }
    employee(){}

};

//derived class syntax
/*class devried-class_name : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}

notes :
1. default visibility mode is private 
2.public visibility mode: public members of the base class becomes public members of the derived class 
2.private visibility mode: public members of the base class becomes private members of the derived class 
*/

// creating a programmer class derived from employee base class

class programmer : public employee{
    public:
    int languagecode; 
    programmer(int inpId){
        id = inpId;
        languagecode = 9; 
    } 
   
    void getdata(){
        cout<<id<<endl;
    }
};

int main(){
    employee harry(1), rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    programmer skillF(1);
cout<<skillF.languagecode<<endl;
cout<<skillF.id<<endl;
skillF.getdata();



return 0;
}