#include <iostream>
using namespace std;

class base
{

public:
    void msg()
    {
        cout << "Base Class" << endl;
    }
};
class derived : public base
{
public:
    void msg()
    {
        cout << "Derived Class" << endl;
    }
};

int main(){

    base b1;
    b1.msg();

    derived d1;
    d1.msg();
}