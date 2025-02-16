#include<iostream>
using namespace std;

inline  int product(int a, int b){
    // not recommended to use inline function with static variable 
    /*static int c=0;*/ // this executes only once 
    /*c=c+1; */ // next time this function runs , the  value of c will be retained
    return a*b;
}
float moneyReceived( int currentMoney, float factor=1.04){
return currentMoney*factor;
}
// int strlen(const char *p){

// }
int main(){
    int a,b/*+c*/;
// cout<<" enter two number "<<endl;
// cin>>a>>b;

// cout<<"the product of number are "<<product(a , b)<<endl;
// cout<<"the product of number are "<<product(a , b)<<endl;
// cout<<"the product of number are "<<product(a , b)<<endl;
// cout<<"the product of number are "<<product(a , b)<<endl;
// cout<<"the product of number are "<<product(a , b)<<endl;
// cout<<"the product of number are "<<product(a , b)<<endl;
// cout<<"the product of number are "<<product(a , b)<<endl;
// cout<<"the product of number are "<<product(a , b)<<endl;
// cout<<"the product of number are "<<product(a , b)<<endl;
// cout<<"the product of number are "<<product(a , b)<<endl;
// cout<<"the product of number are "<<product(a , b)<<endl;
// cout<<"the product of number are "<<product(a , b)<<endl;

int money = 1000000;
cout<< "  if you have "<<money<<"rs in your account you will receive "<<moneyReceived(money)<<"rs in one year"<<endl;
cout<< "FOR VIP =  if you have "<<money<<"rs in your account you will receive "<<moneyReceived(money,1.10)<<"rs in one year"<<endl;







return 0;
}