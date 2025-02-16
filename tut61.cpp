#include<iostream>
#include<fstream>

using namespace std;

int main(){
// ofstream hout("tut60_sample.txt");
// cout<<"enter your name "<<endl;
// string name;
// cin>>name;

// hout<<"my name is "<<name;


// // writing a string to the file
// hout<<"My name is " + name;
// hout.close();

ifstream hin("tut60_sample.txt");
string content;
hin>>content;
cout<<"the content for this file is "<<content<<endl;


return 0;
}