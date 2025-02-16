// #include<iostream>
// using namespace std;

// int sum(int a,int b){
// int c=a+b;
// return c;
// }
// int main(){
// int num1, num2;
// cout<<"enter first number"<<endl;
// cin>>num1;
// cout<<"enter second number "<<endl;
// cin>>num2;
// cout<< " the sum is "<<sum(num1, num2)<<endl;

// return 0;
// }

//  function prototyping 


#include<iostream>
using namespace std;
// function prototype 
// type function-name (arguments);
// int sum (int a , int b); //-----> acceptable
// int sum(int a , b); //-----> not acceptable 
 int sum(int, int ); //----> acceptable

void g(void); // isko void g(); bhi likh sakte hai void likhna optional hai





int main(){
int num1, num2;
cout<<"enter first number"<<endl;
cin>>num1;
cout<<"enter second number "<<endl;
cin>>num2;

// num1 and num2 are actual parameters 
cout<< " the sum is "<<sum(num1, num2)<<endl;
g();
return 0;
}
int sum(int a,int b){
    //formal parameters a and b will be taking values from actual parameters num1 and num2.
int c=a+b;
return c;
}

void g(void){
    cout<< "hello, good morning "<<endl;
}