#include<iostream>
using namespace std;

void table(int n){
    cout<<"the table is :"<<endl;
    for (int i = 1; i < 11; i++)
    {
        cout<<n<<"*"<<i<<" = "<<n*i<<endl;
    }
    

}
int main(){
    int a ;
cout<<"enter the no. of which you want the table "<<endl;
cin>>a;
table(a);
return 0;
}