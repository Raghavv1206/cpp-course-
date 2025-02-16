#include<iostream>
using namespace std;

float sum(float a , float b){
return a+b;
}
float sub(float c, float d){
    return c-d;
}
float mul(float e , float f ){
    return e*f;
}
float div(float g , float h ){
    return g/h;
}
int main(){
float  num1 , num2 , i;
cout<<"this is a calculator!"<<endl;
cout<<endl;
cout<<"enter first number :"<<endl;
cin>>num1;
cout<<"enter second number :"<<endl;
cin>>num2;
cout<<"press 1 for addition"<<endl<<"press 2 for substraction"<<endl<<"press 3 for multiplication"<<endl<<"press 4 for division"<<endl;
cin>>i; 

if (i==1)
{
    cout<<"the required answer is "<<sum(num1,num2)<<endl;
}
else if (i==2)
{
    cout<<"the required answer is "<<sub(num1,num2)<<endl;
}
else if (i==3){
    cout<<"the required answer is "<<mul(num1,num2)<<endl;
}
else if(i==4){
    cout<<"the required answer is "<<div(num1,num2)<<endl;
} 
else { cout<< "invalid input"<<endl; }

return 0;
}