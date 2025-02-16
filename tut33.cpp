#include<iostream>
using namespace std;


class bankDeposite{
    int principle ;
    int years;
    float intrestRate;
    float returnValue;

    public:
    bankDeposite(){}
    bankDeposite(int p, int y, float r); // r can be a value like 0.04
    bankDeposite(int p, int y, int r); // r can be a value like 14
    void show();

};

bankDeposite :: bankDeposite(int p , int y, float r)
{
    principle = p;
    years = y;
    intrestRate = r;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue*(1+intrestRate);
    }
    
}
bankDeposite :: bankDeposite(int p , int y, int r)
{
    principle = p;
    years = y;
    intrestRate = float(r)/100;
    returnValue = principle;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue*(1+intrestRate);
    }
    
}

void bankDeposite :: show(){
    cout<<endl<<"principle amount was "<<principle
        <<". return value after "<<years<<" years is "<<returnValue<<endl;
}   
int main(){
bankDeposite bd1, bd2,bd3;
int p, y ;
float r;
int R;

cout<<"enter the value of p y r "<<endl;
cin>>p>>y>>r;
bd1 = bankDeposite(p, y, r);
bd1.show();

cout<<"enter the value of p, y and R"<<endl;
cin>>p>>y>>R;
bd2 = bankDeposite(p, y , R);
bd2.show();

return 0;
}