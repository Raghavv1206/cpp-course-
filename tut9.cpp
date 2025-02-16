#include <iostream>
using namespace std;
int main (){
    // cout<<"this is tut 9";


//*********selection control structure: if elseif else ladder
    int age;

    cout<<"tell mee your age :"<<endl;
    cin>>age;

    // if((age<18) && (age>0)){
    //     cout<<"you are not allowed in the party"<<endl;

    // } 
    // else if (age==18){
    //     cout<<"you are just 18 and will get a kid pass"<<endl;

    // }
    // else if (age>70){
    //     cout<<"ghar nikal buddhe"<<endl;
    // }
    // else if (age <0){
    //     cout<<"you are not born"<<endl;
    // }
    // else{
    //     cout<<"you are allowed in the party"<<endl;
    // }

//*********selection control structure: switch case statement
switch (age)
{
case 18:
    cout<<"you are 18"<<endl;
    break;
case 22:
    cout<<"you are 22"<<endl;
    break;
case 2:
    cout<<"you are 2"<<endl;
    break;


default:
cout<<" no special cases"<<endl;

    break;
}
    cout<<"done with switch case "<<endl;


 




    return 0;
     
}