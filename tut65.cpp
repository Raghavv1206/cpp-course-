#include<iostream>
using namespace std;

/*
class templets with multiple parameters (one, two or more than 2)
tenplet<class T1, class T2 ......(comma seperated)>
class nameofclass{
body
}
 */

template<class T1, class T2>
class myclass{
    public:
    T1 data1;
    T2 data2;
    myclass(T1 a , T2 b){
        data1 = a;
        data2 = b;
    }

    void display(){
        cout<<this->data1<<endl<<this->data2;
    }
};
int main(){
// myclass<int, char> obj(1,'c');
myclass<char, float> obj('c',1.18);
obj.display();
return 0;
}