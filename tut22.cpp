// oops ----> classe and objects 
// c++ ----> innitially called ---> c with classes by stroustroup
// class ---> extension of structure (in C)
// structures had limitations 
//      - members are public 
//      - no methods 
// classes ---> structure + more 
//classes ---> can have methods and properties
// classes ---> can make few members as private and few as public 
// structures in c++ are typedefed
// you can declare objects along with the class declaration like this :
/*class empuoyee{
    //class definition 
    }harry, rohan, lovish; */
    // harry.salary = 8 makes no sense if the salary is private 

  // nesting of member functions 

#include<iostream>
#include<string>
using namespace std;

class binary
{
    string s;
    public: 
    void read(void);
    void chk_bin(void);
    void oncs_complement(void);
    void display(void);


};
void binary :: read(void){
    cout<<"enter a binary number "<<endl;
    cin>>s;
}
void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) !='0' && s.at(i) !='1'){
            cout<<" incorrect binary format "<<endl;
            exit(0);
        } 
    }
    
}
void binary :: oncs_complement(void){
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) =='0'){
            s.at(i) ='1';
        }
        else{
            s.at(i) ='0';
        }
    }
    
}
void binary :: display(void){
    cout<<"displaying your binary number"<<endl;
     for (int i = 0; i < s.length(); i++)
    {
        cout<< s.at(i);
        }
        cout<< endl;
}
int main(){

  
  binary b;
  b.read();
//   b.chk_bin();
  b.display();
  b.oncs_complement();
  b.display();
return 0;
}