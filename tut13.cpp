#include<iostream>
using namespace std;

int main(){
int marks[4] = {23, 56, 43, 67};

int mathmarks[4];
mathmarks[0] = 2345;
mathmarks[1] = 235;
mathmarks[2] = 245;
mathmarks[3] = 234;

// cout<<"these are marks "<<endl;
// cout<<marks[0]<<endl;
// cout<<marks[1]<<endl;
// cout<<marks[2]<<endl;
// cout<<marks[3]<<endl;
marks[0]= 69; // you can change the value of array
// cout<<marks[0]<<endl;
// cout<<"these are mathmarks"<<endl;
// cout<<mathmarks[0]<<endl;
// cout<<mathmarks[1]<<endl;
// cout<<mathmarks[2]<<endl;
// cout<<mathmarks[3]<<endl;

// using for loop

// for (int i = 0; i < 4; i++)
// {
    // cout<<marks[i]<<endl;
// }

// same using while loop

// int i=0;
// while (i < 4 )
// {
//     cout<<marks[i]<<endl;
//     i++;
// }

// using do while

// do
// {
//     cout<<marks[i]<<endl;
//     i++;
// } while (i<4);


// pointers and array

int* p = marks; 
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
// cout<< " the value of *p is "<<*p<<endl;
// cout<< " the value of *p+1 is "<<*(p+1)<<endl;
// cout<< " the value of *p+2 is "<<*(p+2)<<endl;
// cout<< " the value of *p+3 is "<<*(p+3)<<endl;

return 0;
}