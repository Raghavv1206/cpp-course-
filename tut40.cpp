#include<iostream>
using namespace std;

class student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student :: set_roll_number(int r){
    roll_number = r;
}
void student :: get_roll_number(){
    cout<<"the roll no is "<<roll_number<<endl;
}

class Exam : public student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float, float);
    void get_marks(void);

};

void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}

void Exam :: get_marks(){
    cout<<"the marks obtained in maths are "<<maths<<endl;
    cout<<"the marks obtained in physics are "<<physics<<endl;
}

class result : public Exam{
    float percentage ;
    public:
    void display_result(){
        get_roll_number();
        get_marks();
        cout<<"your percentage is "<<(maths+physics)/2<<"%"<<endl;
    }

};
int main(){

    /*
    notes:
    if we are inheriting B from A and C from B: [ A-----> B -----> C ]
    1. A is the base class for B and B is the base class for C 
    2. ABC is called inheritance path  */
    result harry;
    harry.set_roll_number(420);
    harry.set_marks(94.0, 90.0);
    harry.display_result();


return 0;
}