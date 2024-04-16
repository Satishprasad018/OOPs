#include <iostream>
using namespace std;

class house
{
private:
    int length=0, breadth=0;

public:
    void setData(int x, int y)
    {
        length = x;
        breadth = y;
    }

    void area()
    {
        cout << "Area : "<<length * breadth;
    }
};

int main()
{
    house h1;
    h1.setData(500, 200);
    h1.area();

    return 0;
}