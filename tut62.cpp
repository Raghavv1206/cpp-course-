#include<iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

ofstream out;
out.open("tut60_sample.txt");
out<<"this is me ";
out<<"this is me also \n";
out<<"this is also me ";
out<<"this is alsi me ";
out.close();

ifstream in;
string st, st2;
in.open("tut60_sample.txt");
// in>>st>>st2;
// cout<<st<<st2;

while (in.eof()==0)
{
    getline(in, st);
    cout<<st<<endl;
}

return 0;
}