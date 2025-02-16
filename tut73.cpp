#include<iostream>
#include<map>
#include<string>
using namespace std;

// map is an associative array 
int main(){
map<string, int> marksMap;
marksMap["harry"] = 98;
marksMap["Jack"] = 59;
marksMap["Rohan"] = 2;

marksMap.insert({{"kozume",169},{"kuroo",187}});
map<string, int> :: iterator iter;
for (iter = marksMap.begin(); iter!= marksMap.end(); iter++)
{
    cout<<(*iter).first<<"  "<<(*iter).second<<"\n";
}

cout<<"the size is "<<marksMap.size()<<endl;
cout<<"the max size is "<<marksMap.max_size()<<endl;
cout<<"the empty's return value is "<<marksMap.empty()<<endl;
return 0;
}