#include<iostream>
using namespace std;

int main(){
// for(int i=0; i<40 ; i++)
// {


// if(i==2){
//     break;
// }
//     cout<<i<<endl;
// }
// return 0;
for(int i=0; i<40 ; i++)
{


if(i==2){
    continue;
}
if(i==32){
    break;
}
    cout<<i<<endl;
}
return 0;
}