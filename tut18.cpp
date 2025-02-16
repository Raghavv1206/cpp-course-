#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1){
        return 1;
    }
    return n* factorial(n-1);
}

int fib(int n ){
    if (n<2){
        return 1;
    }
    return fib(n-1)+ fib(n-2);
}
int main(){
    // factorial of a number :
    // 6! = 6*5*4*3*2*1 = 720
    // n! = n* (n-1)!

    int a ;

    cout<<" enter the number "<<endl;
    cin>>a;
    // cout<<" teh factorial of the number "<<a<<" is "<<factorial(a)<<endl;

cout<<"the term in fabonacci sequence at position "<<a<<" is "<<fib(a)<<endl;

return 0;
}