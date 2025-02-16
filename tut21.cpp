/*
#include<iostream>
using namespace std;


class employee
{
private:
int a, b, c;
public:
int d, e;
void setData(int a1, int b1, int c1);  // declaration 
void getData(){
    cout<<"th evalue of a is "<<a<<endl;
    cout<<"th evalue of b is "<<b<<endl;
    cout<<"th evalue of c is "<<c<<endl;
    cout<<"th evalue of d is "<<d<<endl;
    cout<<"th evalue of e is "<<e<<endl;
}
};
void employee :: setData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
employee raghav;
//raghav.a=134; //----> this will throw error as a is private 
raghav.d=34;
raghav.e= 89;
raghav.setData(1,2,4);
raghav.getData();
return 0;
}
*/

// example which i did 

#include<iostream>
using namespace std;

class student
{
private:
 string a ;
 int b;
 public: 
 float c;
 int d;

void setData(string a1, int b1);
void getData(){
    cout<< "the fathers name is "<<a<<endl;
    cout<< "roll number is "<<b<<endl;
    cout<< "the mobile number is "<<c<<endl;
    cout<< "the age is "<<d<<endl;
}

};
void student  :: setData(string a1, int b1){
    a=a1;
    b=b1;

}
int main(){
student om;
om.c=1234567890;
om.d=12;
om.setData("ragahv",69);
om.getData();
return 0;
}