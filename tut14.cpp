#include<iostream>
using namespace std;
typedef struct employee
{
    int eid;
    char favcharacter ;
    float salary;

} ep ;
typedef union money
{
    int rice ; //supose 4 bit storage 
    char car ; // supose 1 bit storage 
    float pounds ; //supose 4 bit storage 
} jk;


int main(){
//  ep raghav ;
//  struct employee om ;
//  struct employee ram ;
//  raghav.eid = 1 ;
//  raghav.favcharacter = 's';
//  raghav.salary = 1200000000;
//  cout<<"the value is "<<raghav.eid<<endl;
//  cout<<"the value is "<<raghav.favcharacter<<endl;
//  cout<<"the value is "<<raghav.salary<<endl;
 

//  union money m1;
//  m1.rice = 34;
//   m1.car = 'c';
//  cout<<m1.rice;


enum meal{ breakfast, lunch, dinner };
// cout<<breakfast<<endl;
// cout<<lunch<<endl;
// cout<<dinner<<endl;
meal m1= lunch;
cout<<(m1==lunch);
cout<<(m1==breakfast);








return 0;
}