#include<iostream>
using namespace std;

// float funcAverage(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }
// float funcAverage2(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}
template <class T1, class T2>
float funcAverage2(T1 a, T2 b){
    float avg = (a+b)/2.0;
 
    return avg;
}
int main(){
float a ;
a= funcAverage2(5,2.2);
printf("the avg is these no is %3f\n",a);
  
   int x=5, y=7;
    swapp(x,y);
cout<<x<<endl<<y;

return 0;
}