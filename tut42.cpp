#include<iostream>
#include<cmath>
using namespace std;
/*
create clases 
1. simple calculator - takes input of 2 no. using utility function and perform +,-,/,* and display the result
using another function
2. scientific calculator - takes input of 2 no. using utility
 function and perform any 4 scientific operation of your choice and display the result
using another function

create another class hybridcalculator and inherit it using these 2 classes:
Q1. What type of inheritance are you using?
Q2. which mode of inheritance are you using?
Q3. create an object of hybridcalculator and display result of simple and scientific calculator.
Q4. how is code reusability implemented    */

class simple_cal{
    protected:
    float a,b,sum,diff,mul;
    float div;
    public:
    void set_no(float, float);
    void get_no(void);

};

void simple_cal :: set_no(float x,float y){
    a = x;
    b = y;
    sum = a + b;
    diff = a-b;
    mul = a*b;
    div = a/b;
}

void simple_cal :: get_no(){
    cout<<"the sum of given 2 values is "<<endl<<sum<<endl;
    cout<<endl;
    cout<<"the difference of given 2 values is "<<endl<<diff<<endl;
    cout<<endl;
    cout<<"the multiplication of given 2 values is "<<endl<<mul<<endl;
    cout<<endl;
    cout<<"the division of given 2 values is "<<endl<<div<<endl;
    cout<<endl;
}

class sci_cal{
    protected:
    int num1,sq,cu;
    float sqt, crt;
    public:
    void set_num(float);
    void get_num(void);

};

void sci_cal :: set_num(float x){
    num1 = x;
    sq = num1*num1;
    cu = num1*num1*num1;
    sqt = sqrt(num1);
    crt = cbrt(num1);
}

void sci_cal :: get_num(){
    cout<<endl;
    cout<<"the square of given number is "<<endl<<sq<<endl;
    cout<<endl;
    cout<<"the cube of given number is "<<endl<<cu<<endl;
    cout<<endl;
    cout<<"the square root of given number is "<<endl<<sqt<<endl;
    cout<<endl;
    cout<<"the cube root of given number is "<<endl<<crt<<endl;
}

class hybridcalculator : public simple_cal , public sci_cal{
    public:
void show(){
cout<<"the results from simple calculator are "<<endl;
cout<<endl;
get_no();
cout<<"the result from scientific calculator are "<<endl;
get_num();

}
};
int main(){
    float a, b,c;
cout<<"this is simple calculator "<<endl;
cout<<"enter first value"<<endl;
cin>>a;
cout<<"enter second value"<<endl;
cin>>b;
cout<<"this is scientific calculator "<<endl;
cout<<"enter the value"<<endl;
cin>>c;
hybridcalculator calci;
calci.set_no(a,b);
calci.set_num(c);
calci.show();
cout<<"-------------------------------------------------------------"<<endl;
cout<<"inheritance used is multiple"<<endl;
cout<<"mode of inheritance is public"<<endl;
return 0;
}