#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    float a, b;
    int z;
    void Power(float, float);
    void Sine(float);
    void Square(float);
    void Cos(float);
    void Tan(float);
    void Log(float);
    void Baselog(float);
    void Arithematic(int);
    void trigno(int);
    void aSine(float);
    void aCos(float);
    void aTan(float);
    cout << "WHAT YOU WANT TO FIND: " << endl;
    cout << "Press '1' for Power: " << endl;
    cout << "Press '2' for Sin: " << endl;
    cout << "Press '3' for Square Root: " << endl;
    cout << "Press '4' for Cos: " << endl;
    cout << "Press '5' for Tan: " << endl;
    cout << "Press '6' for Log: " << endl;
    cout << "Press '7' for Base Log: " << endl;
    cout << "Press '8' for Arithmetic Operation: " << endl;
    cout << "Press '9' for Sin Inverse: " << endl;
    cout << "Press '10' for Cos Inverse: " << endl;
    cout << "Press '11' for Tan Inverse: " << endl;
    

    cin >> z;
    switch (z)
    {
    case 1:
        cout << "Enter the Number for Calculating its Power: " << endl;
        cin >> a;
        cout << "Enter the Power for a Number: " << endl;
        cin >> b;
        Power(a, b);
        break;

    case 2:
        cout << "Enter the Number for Calculating SIN: " << endl;
        cin >> a;
        Sine(a);
        break;

    case 3:
        cout << "Enter the Number for Calculating Square Root: " << endl;
        cin >> a;
        Square(a);
        break;

    case 4:
        cout << "Enter the Number for Calculating COS: " << endl;
        cin >> a;
        Cos(a);
        break;

    case 5:
        cout << "Enter the Number for Calculating TAN: " << endl;
        cin >> a;
        Tan(a);
        break;

    case 6:
        cout << "Enter the Number for Calculating LOG: " << endl;
        cin >> a;
        Log(a);
        break;

    case 7:
        cout << "Enter the Number for Calculating LOG WITH BASE 10: " << endl;
        cin >> a;
        Baselog(a);
        break;
    case 8:
        int x;
        cout<<"Enter the Arithematic Operation you want to perform "<<endl<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl<<"5.Mudulus"<<endl;
        cin>>x;
        Arithematic(x);
        break;
    case 9:
        cout << "Enter the Number for Calculating Sin Inverse: " << endl;
        cin >> a;
        aSine(a);
        break;
    case 10:
        cout << "Enter the Number for Calculating Cos Inverse: " << endl;
        cin >> a;
        aCos(a);
        break;
    case 11:
        cout << "Enter the Number for Calculating Tan Inverse: " << endl;
        cin >> a;
        aTan(a);
        break;
    default:
        cout<<"You have entered wrong input"<<endl;
    }
    return 0;
}

void Power(float x, float y)
{
    float p;
    p = pow(x, y);
    cout << "Power: " << p;
}

void Sine(float x)
{
    float s;
    s = sin(x);
    cout << "Sin: " << s;
}

void Square(float x)
{
    float sq;
    sq = sqrt(x);
    cout << "Square Root of a Given Number is: " << sq;
}

void Cos(float x)
{
    float c;
    c = cos(x);
    cout << "COS: " << c;
}

void Tan(float x)
{
    float t;
    t = tan(x);
    cout << "TAN: " << t;
}

void Log(float x)
{
    float l;
    l = log(x);
    cout << "Natural Logarithm: " << l;
}

void Baselog(float x)
{
    float bl;
    bl = log10(x);
    cout << "LOG with Base 10: " << bl;
}

void aSine(float x)
{
    float s;
    s = asin(x*3.14159/180);
    cout << "Sin Inverse: " << s;
}

void aCos(float x)
{
    float c;
    c = acos(x*3.14159/180);
    cout << "Cos Inverse: " << c;
}


void aTan(float x)
{
    float t;
    t = atan(x);
    cout << "Tan Inverse: " << t;
}



void Arithematic(int x){
    if(x==1){
        int a,b;
        cout<<"Enter two numbers for addition "<<endl;
        cin>>a>>b;
        cout<<"The Addition of "<<a<<" and "<<b<<" is "<<a+b;
    }
    else if(x==2){
        int a,b;
        cout<<"Enter two numbers for Subtraction "<<endl;
        cin>>a>>b;
        cout<<"The Subtraction of "<<a<<" and "<<b<<" is "<<a-b;
    }
    else if(x==3){
        int a,b;
        cout<<"Enter two numbers for Multiplication "<<endl;
        cin>>a>>b;
        cout<<"The Multiplication of "<<a<<" and "<<b<<" is "<<a*b;
    }
    else if(x==4){
        int a,b;
        cout<<"Enter two numbers for Division"<<endl;
        cin>>a>>b;
        cout<<"The Division of "<<a<<" and "<<b<<" is "<<a/b;
    }
    else if(x==5){
        int a,b;
        cout<<"Enter two numbers for Modulus"<<endl;
        cin>>a>>b;
        cout<<"The Modulus of "<<a<<" and "<<b<<" is "<<a%b;
    }
    else{
        cout<<"You have entered wrong input.Try again!"<<endl;
    }
}