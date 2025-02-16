#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "teh id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getcount(void)
    {
        // cout<<id;  // throws an error
        cout << "teh value of count is " << count << endl;
    }
};

// count is the static data membefr of class employee
int employee ::count = 1000; // default value is 0

int main()
{
    employee harry, rohan, lovish;
    // harry.id=1;
    // harry.count = 1;  // cannot do this as id and count are private
    harry.setdata();
    harry.getdata();
    employee::getcount();

    rohan.setdata();
    rohan.getdata();
    employee::getcount();

    lovish.setdata();
    lovish.getdata();
    employee::getcount();
    return 0;
}