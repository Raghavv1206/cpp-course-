#include<iostream>
using namespace std;
template <class t>
class harry{
    public:
    t data;
    harry(t a){
        data = a;
    }
    void display();
};
    template <class t>
    void harry<t>::display(){
        cout<<data<<endl;
    }

    void func(int a){
        cout<<"i am first func() "<<a<<endl;
    }

    template<class t>
    void func(t a){
        cout<<" i am templatised func() "<<a<<endl;
    }
    template<class t>
    void func1(t a){
        cout<<" i am templatised func() "<<a<<endl;
    }
int main(){

// harry<float> h(5.7);
// harry<char> h('a');
// harry<int> h(5);
// cout<<h.data<<endl;
// h.display();

func(4);  //exact match takes the highest priority
func1(4);  //exact match takes the highest priority
return 0;
}