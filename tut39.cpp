#include<iostream>
using namespace std;


class base{
    protected:
    int a ;
    private:
    int b;


};

/*for a protected member:
                            protected derivation   private derivation   protected derivation
    1.private members       not inhereted          not inhereted        not inhereted
    2. protected members    protected              private              protected
    3. public members       public                 private              protected
    */

class derived : protected base{


};


int main(){
    base b;
    derived d;
    // cout<<d.a;    // since a is protected in both base as well as derived class

return 0;
}