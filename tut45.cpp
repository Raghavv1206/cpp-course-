#include<iostream>
using namespace std;

/*

student ------>test ---------|
    |                        |------------->result
    ---------->sports--------|*/
    
class student{
    protected:
    int rollno;
    public:
    void set_no(int a ){
        rollno= a;

    }
    void print_number(void){
        cout<<"your roll no is "<<rollno<<endl;
    }
};

class test : virtual public student{
    protected :
    float maths, physics;
    public:
    void set_marks(float m1, float m2){
        maths = m1;
        physics = m2;
    }
    void print_marks(void){
        cout<<"your result is here: "<<endl
            <<"maths:"<<maths<<endl
            <<"physics:"<<physics<<endl;
    }

};
class sports : virtual public student{
    protected :
    float score;
    public:
    void set_score(float sc){
        score = sc;

    }
    void print_score(void){
        cout<<"your pt score is "<<score<<endl;
    }
};

class result : public test, public sports{
    private:
    float total;
    public:
    void display(void){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<<"your total score is "<<total<<endl;
    }

};
int main(){
    result harry;
    harry.set_no(4200);
    harry.set_marks(78.9,99.5);
    harry.set_score(9);
    harry.display();

return 0;
}