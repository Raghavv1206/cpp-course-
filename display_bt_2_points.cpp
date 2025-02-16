/*create a functiomn (hint : make it a frienf=d function )which 
takes 2 point object and compute the dt bw those points */
#include<iostream>
#include<cmath>
#define UNDERLINE "\033[4m" 
#define CLOSEUNDERLINE "\033[0m"
using namespace std;

class calculator;

class point{
    friend class calculator;
    int x,y;
    public:
    point(int a, int b){
        x=a;
        y=b;

    }
    void displaypoint(void){
        cout<<"the point is ("<<x<<","<<y<<")"<<endl;
    }
};

class calculator{
    
    public:
    int distance(point , point );
};

int calculator :: distance(point p,point q ){
    return ( sqrt(((q.x - p.x)*(q.x - p.x))+((q.y - p.y)*(q.y - p.y)))); 
}
int main(){
    int g,h,i,j;
    cout<<UNDERLINE<<"coordinates of first point"<<CLOSEUNDERLINE<<endl;
    cout<<endl;
    cout<<"enter coordinates of X-axis :- "<<endl;
    cin>>g;
    cout<<"enter coordinates of Y-axis :- "<<endl;
    cin>>h;
    cout<<UNDERLINE<<"coordinates of second point"<<CLOSEUNDERLINE<<endl;
    cout<<endl;
    cout<<"enter coordinates of X-axis :- "<<endl;
    cin>>i;
    cout<<"enter coordinates of Y-axis :- "<<endl;
    cin>>j;



point p(g,h);
point q(i,j);

calculator calc;
int dt = calc.distance(p,q);
cout<<"the distance between given 2 points is "<<dt<<endl;

return 0;
}