#include <iostream>
using namespace std;

class base
{
public:
    virtual void show() = 0;    // pure virtual function
};

class derived_1 : public base
{
public:
    void show()
    {
        cout << "DERIVED CLASS 1" << endl;
    };
};

class derived_2 : public base
{
public:
    void show()
    {
        cout << "DERIVED CLASS 2" << endl;
    };
};

int main()
{
    derived_1 d1;
    derived_2 d2;

    base *ptr = NULL;
    ptr = &d1;
    ptr->show();

    ptr = &d2;
    ptr->show();
}