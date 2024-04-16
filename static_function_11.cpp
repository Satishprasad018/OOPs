#include <iostream>
using namespace std;

class Alpha
{
private:
    int a;
    int b;

public:
    Alpha()
    {
        a = 5;
        b = 10;
    };

    static int stat;

    static int getStat()
    {
        stat++;
        return stat;
    }
};
int Alpha ::stat = 0;

int main()
{
    cout << Alpha::stat << endl;
    cout << Alpha::getStat() << endl;
    Alpha a1;
    Alpha a2;

    cout << Alpha::getStat() << endl;
    cout << a1.getStat() << endl;
    cout << a2.getStat() << endl;
}