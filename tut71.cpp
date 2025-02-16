#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"e=displaying this vector";
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<"  ";
    cout<<v.at(i)<<"  ";
}
cout<<endl;
}

int main(){

    //ways to create a vector
    vector<int> vec1; // zero length integer vector
    
    int elements, size=5;
    // cout<<"enter the size of elements : "<<endl;
    // cin>>size;
    // for (int i = 0; i < 4; i++)
    // {
        //     cout<<"enter the element to add to this vector "<<endl;
//     cin>>elements;
//     vec1.push_back(elements);

// }

// // vec1.pop_back();
// display(vec1);
// vector<int> :: iterator iter = vec1.begin();
// // vec1.insert(iter+1,5,566);
// display(vec1);

vector<char> vec2(4);
// vec2.push_back('5');
// display(vec2);
// vector<char> vec3(vec2);  // 4-elements character vector from vec2
// display(vec3);
vector<int> vec4(4,13);  // 6-element vector of 3s
display(vec4);
cout<<vec4.size();
return 0;
}