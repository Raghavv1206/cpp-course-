#include<iostream>
#include<fstream>
using namespace std;

/*
the clases for working with files in c++ are:
1. fstreambase
2. ifstream ---> derived from fstreambase
3. ofstream ---> derived from fstreambase
  */

//   in order to work with files in cpp , you will have to open it. primariy, there are two ways to open a file :
//  1. using the constructor
//  2.using the member function open() of the clsss

int main(){
string st="aur bhai" ;
string st2;
//  opening files using constructor  and writing it

// ofstream out("tut60_sample.txt");
// out<<st;


// opening files in the constructor and reading to it 
ifstream in("tut60_sampleB.txt");   // read operation
// in>>st2;
getline(in, st2);
getline(in, st2);  
cout<<st2;
return 0;
}